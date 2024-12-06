#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Prints an error message and exits with status 98.
 * @message: The error message to be printed.
 */
void print_error(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

/**
 * print_hex - Prints the hexadecimal values of the ELF header.
 * @data: The data to be printed.
 * @length: The length of the data.
 */
void print_hex(unsigned char *data, size_t length) {
    for (size_t i = 0; i < length; i++) {
        printf("%02x", data[i]);
        if (i < length - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

/**
 * main - Entry point of the program. Displays ELF header information.
 * @argc: The number of arguments.
 * @argv: The arguments array.
 * Return: 0 on success, or exit with status 98 on failure.
 */
int main(int argc, char **argv) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error: Unable to open the file");
    }

    unsigned char e_ident[EI_NIDENT];
    if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT) {
        close(fd);
        print_error("Error: Unable to read ELF header");
    }

    if (e_ident[EI_MAG0] != 0x7f || e_ident[EI_MAG1] != 'E' || 
        e_ident[EI_MAG2] != 'L' || e_ident[EI_MAG3] != 'F') {
        close(fd);
        print_error("Error: Not an ELF file");
    }

    printf("ELF Header:\n");

    printf("  Magic:   ");
    print_hex(e_ident, EI_NIDENT);

    printf("  Class:                             ");
    if (e_ident[EI_CLASS] == ELFCLASS32) {
        printf("ELF32\n");
    } else if (e_ident[EI_CLASS] == ELFCLASS64) {
        printf("ELF64\n");
    } else {
        printf("<unknown>\n");
    }

    printf("  Data:                              ");
    if (e_ident[EI_DATA] == ELFDATA2LSB) {
        printf("2's complement, little endian\n");
    } else if (e_ident[EI_DATA] == ELFDATA2MSB) {
        printf("2's complement, big endian\n");
    } else {
        printf("<unknown>\n");
    }

    printf("  Version:                           %d (current)\n", e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %d>\n", e_ident[EI_OSABI]);
            break;
    }

    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);

    Elf32_Ehdr ehdr32;
    Elf64_Ehdr ehdr64;
    if (e_ident[EI_CLASS] == ELFCLASS32) {
        if (lseek(fd, 0, SEEK_SET) == -1 || read(fd, &ehdr32, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr)) {
            close(fd);
            print_error("Error: Unable to read ELF header");
        }
        printf("  Type:                              ");
        switch (ehdr32.e_type) {
            case ET_EXEC:
                printf("EXEC (Executable file)\n");
                break;
            case ET_DYN:
                printf("DYN (Shared object file)\n");
                break;
            default:
                printf("<unknown: %d>\n", ehdr32.e_type);
                break;
        }
        printf("  Entry point address:               0x%x\n", ehdr32.e_entry);
    } else if (e_ident[EI_CLASS] == ELFCLASS64) {
        if (lseek(fd, 0, SEEK_SET) == -1 || read(fd, &ehdr64, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
            close(fd);
            print_error("Error: Unable to read ELF header");
        }
        printf("  Type:                              ");
        switch (ehdr64.e_type) {
            case ET_EXEC:
                printf("EXEC (Executable file)\n");
                break;
            case ET_DYN:
                printf("DYN (Shared object file)\n");
                break;
            default:
                printf("<unknown: %d>\n", ehdr64.e_type);
                break;
        }
        printf("  Entry point address:               0x%lx\n", ehdr64.e_entry);
    }

    close(fd);
    return 0;
}

