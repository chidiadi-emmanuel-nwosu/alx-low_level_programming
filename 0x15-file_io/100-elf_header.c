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

	/*Set file offset to zero*/
	lseek(fd, 0, SEEK_SET);

	/*Allocate memory to Elf64_Ehdr pointer*/
	elf = malloc(sizeof(*elf));

	/*Read file into elf and check for errors*/
	re = read(fd, elf, sizeof(*elf));
	check_error(re, 1, "elf");

	/*Check if opened file is an elf file*/
	check_elf(elf->e_ident);

	/*Print information*/
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
	if (!(e_ident[0] == 0x7f && e_ident[1] == 'E'
				&& e_ident[2] == 'L' && e_ident[3] == 'F'))
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
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
void print_magic(__attribute__((unused)) Elf64_Ehdr *elf)
{

}


/**
 * print_class - prints class part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_class(__attribute__((unused)) Elf64_Ehdr *elf)
{

}



/**
 * print_data - prints data part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_data(__attribute__((unused)) Elf64_Ehdr *elf)
{

}



/**
 * print_version - prints version part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_version(__attribute__((unused)) Elf64_Ehdr *elf)
{

}



/**
 * print_osabi - prints osabi part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_osabi(__attribute__((unused)) Elf64_Ehdr *elf)
{

}



/**
 * print_abiver - prints abi version part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_abiver(__attribute__((unused)) Elf64_Ehdr *elf)
{

}




/**
 * print_type - prints type part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_type(__attribute__((unused)) Elf64_Ehdr *elf)
{

}



/**
 * print_entry - prints address part of elf header
 * @elf: elf_header file
 *
 * Return: void
 */
void print_entry(__attribute__((unused)) Elf64_Ehdr *elf)
{

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
		write(STDERR_FILENO, "Error: Can't close file\n", 24);
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
void check_error(int file_from, int file_to, __attribute__((unused)) char *filename)
{
	if (file_from < 0)
	{
		write(STDERR_FILENO, "Error: Can't read input file\n", 29);
		exit(98);
	}

	if (file_to < 0)
	{
		write(STDERR_FILENO, "Error: Can't write to elf file\n", 31);
		exit(98);
	}
}
