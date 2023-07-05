#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * error_exit - Prints an error message to stderr and exits with a
 * specified code.
 * @msg: The error message to print.
 * @exit_code: The exit code.
 */
void error_exit(char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
 * print_magic - Prints the magic bytes of the ELF file.
 * @e_ident: The ELF identification bytes.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_class - Prints the ELF file class (32-bit or 64-bit).
 * @e_ident: The ELF identification bytes.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_data - Prints the data encoding of the ELF file.
 * @e_ident: The ELF identification bytes.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
 * print_version - Prints the version of the ELF file.
 * @e_ident: The ELF identification bytes.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:
    %d (current)\n", e_ident[EI_VERSION]);
}

/**
 * print_os_abi - Prints the operating system and ABI of the ELF file.
 * @e_ident: The ELF identification bytes.
 */
void print_os_abi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
		break;
	}
}

/**
 * print_abi_version - Prints the ABI version of the ELF file.
 * @e_ident: The ELF identification bytes.
 */
void print_abi_version(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of the ELF file.
 * @e_type: The ELF file type.
 */
void print_type(unsigned int e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
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
		printf("<unknown: %x>\n", e_type);
		break;
	}
}

/**
 * print_entry - Prints the entry point address of the ELF file.
 * @e_entry: The entry point address.
 */
void print_entry(Elf64_Addr e_entry)
{
	printf("  Entry point address:
    %#lx\n", (unsigned long) e_entry);
}

/**
 * display_elf_header - Displays the information contained in the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *elf_header)
{
	printf("ELF Header:\n");
	print_magic(elf_header->e_ident);
	print_class(elf_header->e_ident);
	print_data(elf_header->e_ident);
	print_version(elf_header->e_ident);
	print_os_abi(elf_header->e_ident);
	print_abi_version(elf_header->e_ident);
	print_type(elf_header->e_type);
	print_entry(elf_header->e_entry);
}

/**
 * read_elf_header - Reads the ELF header from the file.
 * @fd: The file descriptor of the ELF file.
 * @elf_header: Pointer to the ELF header structure to store the read data.
 */
void read_elf_header(int fd, Elf64_Ehdr *elf_header)
{
	ssize_t bytes_read;

	bytes_read = read(fd, elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
		error_exit("Error: Unable to read ELF header", 98);
	else if (bytes_read != sizeof(Elf64_Ehdr))
		error_exit("Error: Incomplete ELF header read", 98);
}

/**
 * elf_header - Displays the information contained in the ELF
 * header of an ELF file.
 * @file_path: The path of the ELF file.
 */
void elf_header(char *file_path)
{
	int fd;
	Elf64_Ehdr elf_header;

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		error_exit("Error: Unable to open ELF file", 98);

	read_elf_header(fd, &elf_header);

	display_elf_header(&elf_header);

	if (close(fd) == -1)
		error_exit("Error: Unable to close ELF file", 98);
}

/**
 * main - Entry point. Parses command-line arguments and calls
 * elf_header function.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, or an exit status on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	elf_header(argv[1]);

	return (0);
}
