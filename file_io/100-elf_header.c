#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

void print_elf_header(void *header, int class)
{
    int i;

    if (class == ELFCLASS64)
    {
        Elf64_Ehdr *elf64_header = (Elf64_Ehdr *)header;
        printf("ELF Header:\n");
        printf("  Magic:   ");
        for (i = 0; i < EI_NIDENT; i++)
        {
            printf("%02x", elf64_header->e_ident[i]);
            if (i != EI_NIDENT - 1)
                printf(" ");
        }
        printf("\n");

        printf("  Class:                             ELF64\n");

        printf("  Data:                              ");
        if (elf64_header->e_ident[EI_DATA] == ELFDATA2LSB)
            printf("2's complement, little endian\n");
        else if (elf64_header->e_ident[EI_DATA] == ELFDATA2MSB)
            printf("2's complement, big endian\n");

        printf("  Version:                           %d (current)\n", elf64_header->e_ident[EI_VERSION]);

        printf("  OS/ABI:                            ");
        switch (elf64_header->e_ident[EI_OSABI])
        {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %x>\n", elf64_header->e_ident[EI_OSABI]);
        }

        printf("  ABI Version:                       %d\n", elf64_header->e_ident[EI_ABIVERSION]);

        printf("  Type:                              ");
        switch (elf64_header->e_type)
        {
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        default:
            printf("<unknown: %x>\n", elf64_header->e_type);
        }

        printf("  Entry point address:               0x%lx\n", elf64_header->e_entry);
    }
    else if (class == ELFCLASS32)
    {
        Elf32_Ehdr *elf32_header = (Elf32_Ehdr *)header;
        printf("ELF Header:\n");
        printf("  Magic:   ");
        for (i = 0; i < EI_NIDENT; i++)
        {
            printf("%02x", elf32_header->e_ident[i]);
            if (i != EI_NIDENT - 1)
                printf(" ");
        }
        printf("\n");

        printf("  Class:                             ELF32\n");

        printf("  Data:                              ");
        if (elf32_header->e_ident[EI_DATA] == ELFDATA2LSB)
            printf("2's complement, little endian\n");
        else if (elf32_header->e_ident[EI_DATA] == ELFDATA2MSB)
            printf("2's complement, big endian\n");

        printf("  Version:                           %d (current)\n", elf32_header->e_ident[EI_VERSION]);

        printf("  OS/ABI:                            ");
        switch (elf32_header->e_ident[EI_OSABI])
        {
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %x>\n", elf32_header->e_ident[EI_OSABI]);
        }

        printf("  ABI Version:                       %d\n", elf32_header->e_ident[EI_ABIVERSION]);

        printf("  Type:                              ");
        switch (elf32_header->e_type)
        {
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        default:
            printf("<unknown: %x>\n", elf32_header->e_type);
        }

        printf("  Entry point address:               0x%x\n", elf32_header->e_entry);
    }
}
