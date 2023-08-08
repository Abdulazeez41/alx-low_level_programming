#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error_and_exit - Print error message to stderr and exit.
 *
 * @message: Error message to display.
 */
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * main - Display ELF header information of an ELF file.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd, i;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error_and_exit("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error_and_exit("Error: Cannot open ELF file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error_and_exit("Error: Cannot read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3) {
		print_error_and_exit("Error: Not an ELF file");
	}

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\nClass:   %d-bit\n", (header.e_ident[EI_CLASS] == ELFCLASS64) ? 64 : 32);
	printf("Data:    %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:    %d\n", header.e_type);
	printf("Entry point address: %lx\n", header.e_entry);

	close(fd);
	return (0);
}

