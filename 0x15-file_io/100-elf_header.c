/*
 * File: 100-elf_header.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * main - program that displays the information contained
 *        in the ELF header at the start of an ELF file.
 * @argc: number of commandline arguments.
 * @argv: array of commandline arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd, re;
	Elf64_Ehdr *elf;

	/*Check if number of inputs are valid*/
	check_argc(argc);

	/*Open file and check for errors*/
	fd = open(argv[1], O_RDONLY);
	check_error(fd, 1, argv[1]);

	/*Allocate memory to Elf64_Ehdr pointer*/
	elf = malloc(sizeof(*elf));
	if (elf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: memory alloation failed\n");
		close_fd(fd);
		exit(98);
	}
	/*Read file into elf and check for errors*/
	re = read(fd, elf, sizeof(*elf));
	check_error(re, 1, "elf");

	/*Check if opened file is an elf file*/
	check_elf(elf->e_ident);

	/*Print information*/
	printf("ELF Header:\n");
	get_print_info("magic")(elf);
	get_print_info("class")(elf);
	get_print_info("data")(elf);
	get_print_info("version")(elf);
	get_print_info("osabi")(elf);
	get_print_info("abiver")(elf);
	get_print_info("type")(elf);
	get_print_info("entry")(elf);

	/*Free and close files*/
	free(elf);
	close_fd(fd);
	return (0);
}




/**
 * check_argc - check if the number of commandline arguments are valid.
 * @argc: number of commandline arguments.
 *
 * Return: void.
 */
void check_argc(int argc)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
}




/**
 * check_elf - check if the input file is of elf type.
 * @e_ident: file input.
 *
 * Return: void.
 */
void check_elf(unsigned char *e_ident)
{
	if (!(e_ident[EI_MAG0] == 0x7f && e_ident[EI_MAG1] == 'E'
				&& e_ident[EI_MAG2] == 'L' && e_ident[EI_MAG3] == 'F'))
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
}



/**
 * get_print_info - points to the print info function
 *                  called by the caller function.
 * @info: function to point to.
 *
 * Return: void.
 */
void (*get_print_info(char *info))(Elf64_Ehdr *elf)
{
	int i = 0;

	info_t get[] = {
		{"magic", print_magic},
		{"class", print_class},
		{"data", print_data},
		{"version", print_version},
		{"osabi", print_osabi},
		{"abiver", print_abiver},
		{"type", print_type},
		{"entry", print_entry},
		{NULL, NULL}
	};

	for (; get[i].info; i++)
		if (*info == *(get[i].info))
			return (get[i].f);

	return (0);
}




/**
 * print_magic - prints magic part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_magic(Elf64_Ehdr *elf)
{
	int i = 0;

	printf("  Magic:   ");
	for (; i < 16; i++)
	{
		printf("%02x", elf->e_ident[i]);
		if (i == 15)
			printf("\n");
		else
			printf(" ");
	}
}


/**
 * print_class - prints class part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_class(Elf64_Ehdr *elf)
{
	printf("  Class:                             ");

	if (elf->e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("invalid\n");
	else if (elf->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (elf->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
}



/**
 * print_data - prints data part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_data(Elf64_Ehdr *elf)
{
	printf("  Data:                              ");

	if (elf->e_ident[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (elf->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	if (elf->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian");
}



/**
 * print_version - prints version part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_version(Elf64_Ehdr *elf)
{
	printf("  Version:                           ");

	if (elf->e_ident[EI_VERSION] == EV_NONE)
		printf("0 (invalid)\n");
	else if (elf->e_ident[EI_VERSION] == EV_CURRENT)
		printf("1 (current)\n");
}



/**
 * print_osabi - prints osabi part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_osabi(Elf64_Ehdr *elf)
{
	printf("  OS/ABI:                            ");

	switch (elf->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
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
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x", elf->e_ident[EI_OSABI]);
	}
}



/**
 * print_abiver - prints abi version part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_abiver(Elf64_Ehdr *elf)
{
	printf("  ABI Version:                       ");
	printf("%i\n", elf->e_ident[EI_ABIVERSION]);
}



/**
 * print_type - prints type part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_type(Elf64_Ehdr *elf)
{
	printf("  Type:                              ");

	switch (elf->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
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
			printf("CORE (Relocatable file)\n");
			break;
	}
}



/**
 * print_entry - prints address part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_entry(Elf64_Ehdr *elf)
{
	unsigned long tmp = elf->e_entry;

	if (elf->e_ident[EI_DATA] == ELFDATA2MSB)
		tmp = SWAP_ENDIAN(tmp);

	printf("  Entry point address:               ");

	if (elf->e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)tmp);
	else if (elf->e_ident[EI_CLASS] == ELFCLASS64)
		printf("%#lx\n", tmp);
}




/**
 * close_fd - closes a file descriptor(fd).
 * @fd: fd to be closed.
 *
 * Return: void
 */
void close_fd(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %i\n", fd);
		exit(98);
	}
}




/**
 * check_error - checks if syscall function returns an error
 * @file_from: fd input 1
 * @file_to: fd input 2
 * @filename: filename
 *
 * Return: void
 */
void check_error(int file_from, int file_to, char *filename)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read %s\n", filename);
		exit(98);
	}

	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(98);
	}
}
