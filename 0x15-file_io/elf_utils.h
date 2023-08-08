#ifndef ELF_UTILS_H
#define ELF_UTILS_H

#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

int read_elf_header(int elf_fd, Elf64_Ehdr *header);
void print_elf_header_info(Elf64_Ehdr *header);

#endif /* ELF_UTILS_H */
