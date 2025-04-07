#include <stdio.h>
#include <elf.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void print_elf_header(Elf64_Ehdr *header);

int main(int argc, char **argv)
{
    int fd;
    Elf64_Ehdr header;
    ssize_t nread;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
        exit(98);
    }

    nread = read(fd, &header, sizeof(header));
    if (nread == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if ((size_t)nread < sizeof(header) || header.e_ident[EI_MAG0] != 0x7f ||
        header.e_ident[EI_MAG1] != 'E' || header.e_ident[EI_MAG2] != 'L' ||
        header.e_ident[EI_MAG3] != 'F')
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        close(fd);
        exit(98);
    }

    print_elf_header(&header);

    close(fd);
    return (0);
}

void print_elf_header(Elf64_Ehdr *header)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header->e_ident[i]);
    printf("\n");

    printf("  Class:                             ");
    if (header->e_ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else if (header->e_ident[EI_CLASS] == ELFCLASS64)
        printf("ELF64\n");

    printf("  Data:                              ");
    if (header->e_ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
        printf("2's complement, big endian\n");

    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("UNIX - Solaris\n");
        break;
    case ELFOSABI_IRIX:
        printf("IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("FreeBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("Linux\n");
        break;
    case ELFOSABI_ARM:
        printf("ARM\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone (embedded)\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
    }

    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (header->e_type)
    {
    case ET_NONE:
        printf("None (None)\n");
        break;
    case ET_REL:
        printf("REL (Relocatable file)\n");
        break;
    case ET_EXEC:
        printf("EXEC (Executable file)\n");
        break;
    case ET_DYN:
        printf("DYN (Shared object file)\n");
        break;
    case ET_CORE:
        printf("CORE (Core file)\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_type);
    }

    printf("  Entry point address:               0x%lx\n", header->e_entry);
}
