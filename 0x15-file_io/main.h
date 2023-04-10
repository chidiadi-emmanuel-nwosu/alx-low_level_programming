#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>

#define SWAP_ENDIAN(val) \
 ( (((val) >> 56) & 0x00000000000000FF) | (((val) >> 40) & 0x000000000000FF00) | \
   (((val) >> 24) & 0x0000000000FF0000) | (((val) >>  8) & 0x00000000FF000000) | \
   (((val) <<  8) & 0x000000FF00000000) | (((val) << 24) & 0x0000FF0000000000) | \
   (((val) << 40) & 0x00FF000000000000) | (((val) << 56) & 0xFF00000000000000) )

/**
 * struct info - Struct info
 *
 * @info: the required information
 * @f: the function associated
 */
typedef struct info
{
	char *info;
	void (*f)(Elf64_Ehdr *);
} info_t;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


/* function prototypes for additional mandatory and advanced task */
void check_argc(int argc);
void check_elf(unsigned char *e_ident);


void (*get_print_info(char *info))(Elf64_Ehdr *elf);
void print_magic(Elf64_Ehdr *elf);
void print_class(Elf64_Ehdr *elf);
void print_data(Elf64_Ehdr *elf);
void print_version(Elf64_Ehdr *elf);
void print_osabi(Elf64_Ehdr *elf);
void print_abiver(Elf64_Ehdr *elf);
void print_type(Elf64_Ehdr *elf);
void print_entry(Elf64_Ehdr *elf);


void close_fd(int fd);
void check_error(int file_from, int file_to, char *filename);


#endif
