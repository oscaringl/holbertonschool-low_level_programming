#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

/**
 * error_exit - Prints an error message and exits the program.
 * @message: The error message to print.
 */
void error_exit(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/**
 * print_magic - Prints the magic bytes of the ELF file.
 * @e_ident: Pointer to the e_ident array of the ELF header.
 */
void print_magic(unsigned char *e_ident)
{
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", e_ident[i]);
    printf("\n");
}

/**
 * print_class - Prints the class (32-bit or 64-bit) of the ELF file.
 * @e_ident: Pointer to the e_ident array of the ELF header.
 */
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
    {
        case ELFCLASSNONE:
            printf("NONE (Unknown class)\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
            break;
    }
}

/**
 * print_data - Prints the data encoding (little-endian or big-endian) of the ELF file.
 * @e_ident: Pointer to the e_ident array of the ELF header.
 */
void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
    {
        case ELFDATANONE:
            printf("Unknown data format\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_DATA]);
            break;
    }
}

/**
 * print_version - Prints the ELF version of the ELF file.
 * @e_ident: Pointer to the e_ident array of the ELF header.
 */
void print_version(unsigned char *e_ident)
{
    printf("  Version:                           ");
    if (e_ident[EI_VERSION] == EV_NONE)
        printf("Invalid version\n");
    else if (e_ident[EI_VERSION] == EV_CURRENT)
        printf("%d (current)\n", EV_CURRENT);
    else
        printf("<unknown: %x>\n", e_ident[EI_VERSION]);
}

/**
 * print_os_abi - Prints the operating system and ABI of the ELF file.
 * @e_ident: Pointer to the e_ident array of the ELF header.
 */
void print_os_abi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI])
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
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        case ELFOSABI_ARM_AEABI:
            printf("ARM EABI\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone (embedded) application\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_OSABI]);
            break;
    }
}

/**
 * print_entry_point - Prints the entry point address of the ELF file.
 * @e_entry: The e_entry field of the ELF header.
 */
void print_entry_point(Elf64_Addr e_entry)
{
    printf("  Entry point address:               %#lx\n", e_entry);
}

/**
 * print_elf_header - Prints the ELF header information.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    print_magic(header->e_ident);
    print_class(header->e_ident);
    print_data(header->e_ident);
    print_version(header->e_ident);
    print_os_abi(header->e_ident);
    print_entry_point(header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
        error_exit("Invalid number of arguments");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        error_exit("Cannot open file");

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        close(fd);
        error_exit("Cannot read ELF header");
    }

    print_elf_header(&header);

    close(fd);
    return 0;
}
