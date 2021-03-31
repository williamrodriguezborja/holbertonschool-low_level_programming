#include <string.h>
#include <sys/mman.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE (1024)
#define EXIT_98 exit(98)
#define LAST_IDENT (15)
#define ELF_64 ("ELF64")
#define ELF_32 ("ELF32")
#define DATA_NONE_STR "Unknown data format."
#define DATA_2L_STR "2's complement, little endian"
#define DATA_2M_STR "2's complement, big-endian."
#define CLASS ("  Class:                             %s\n")
#define DATA ("  Data:                              %s\n")
#define VERSION ("  Version:                           %s\n")
#define OS_ABI ("  OS/ABI:                            %s\n")
#define TYPE ("  Type:                              %s\n")

#define PRINT_MAGIC(header)\
	do { \
		printf("ELF Header:\n  Magic:   ");\
		for (i = 0; i <= LAST_IDENT; i++)  \
			printf("%02x%c", header->e_ident[i], ((i == LAST_IDENT) ? '\n' : ' ')); \
	} while (0)

#define PRINT_CLASS(is_64) \
	printf(CLASS, is_64 ? ELF_64 : ELF_32)

#define PRINT_DATA(header)                \
	do {                                  \
		switch (header->e_ident[EI_DATA]) \
		{                                 \
		case ELFDATANONE:                 \
			printf(DATA, DATA_NONE_STR);  \
			break;                        \
		case ELFDATA2LSB:                 \
			printf(DATA, DATA_2L_STR);    \
			break;                        \
		case ELFDATA2MSB:                 \
			printf(DATA, DATA_2M_STR);    \
			break;                        \
		default:                          \
			break;                        \
		}                                 \
	} while (0)

#define PRINT_VERSION(header)                       \
	do {                                               \
		if (header->e_ident[EI_VERSION] == EV_NONE) \
			printf(VERSION, "0 (invalid)");         \
		else                                        \
			printf(VERSION, "1 (current)");         \
	} while (0)

#define PRINT_OSABI(header)                               \
	do {                                                     \
		switch (header->e_ident[EI_OSABI])                \
		{                                                 \
		case ELFOSABI_NONE:                               \
			printf(OS_ABI, "UNIX - System V");          \
			break;                                        \
		case ELFOSABI_HPUX:                               \
			printf(OS_ABI, "HP-UX ABI");                  \
			break;                                        \
		case ELFOSABI_NETBSD:                             \
			printf(OS_ABI, "NetBSD ABI");                 \
			break;                                        \
		case ELFOSABI_LINUX:                              \
			printf(OS_ABI, "Linux ABI");                  \
			break;                                        \
		case ELFOSABI_SOLARIS:                            \
			printf(OS_ABI, "Solaris ABI");                \
			break;                                        \
		case ELFOSABI_IRIX:                               \
			printf(OS_ABI, "IRIX ABI");                   \
			break;                                        \
		case ELFOSABI_FREEBSD:                            \
			printf(OS_ABI, "FreeBSD ABI");                \
			break;                                        \
		case ELFOSABI_TRU64:                              \
			printf(OS_ABI, "TRU64 UNIX ABI");             \
			break;                                        \
		case ELFOSABI_ARM:                                \
			printf(OS_ABI, "ARM architecture ABI");       \
			break;                                        \
		case ELFOSABI_STANDALONE:                         \
			printf(OS_ABI, "Stand-alone (embedded) ABI"); \
			break;                                        \
		default:                                          \
			break;                                        \
		}                                                 \
	} while (0)
#define PRINT_ABIVERSION(header) \
	printf("  ABI Version:\t\t\t     %d\n", header->e_ident[EI_ABIVERSION])

#define PRINT_TYPE(header)                          \
	do {                                               \
		switch (header->e_type)                     \
		{                                           \
		case ET_NONE:                               \
			printf(TYPE, "NONE (Unknown Type)");    \
			break;                                  \
		case ET_REL:                                \
			printf(TYPE, "REL (Relocatable file)"); \
			break;                                  \
		case ET_EXEC:                               \
			printf(TYPE, "EXEC (Executable file)"); \
			break;                                  \
		case ET_DYN:                                \
			printf(TYPE, "DYN (Shared object file)");    \
			break;                                  \
		case ET_CORE:                               \
			printf(TYPE, "CORE (core file)");       \
			break;                                  \
		default:                                    \
			break;                                  \
		}                                           \
	} while (0)
/**
 * main - read header elf
 * @argc: count
 * @argv: arg
 * Return: int
 */
int main(int argc, char const *argv[])
{
	int file_d, i, is_64;
	char buffer[BUFFER_SIZE];
	Elf32_Ehdr *header;

	if (argc != 2)
		EXIT_98;

	file_d = open(argv[1], O_RDONLY);
	if (file_d == -1)
		exit(98);

	if (read(file_d, buffer, BUFFER_SIZE) == -1)
		EXIT_98;

	header =  (Elf32_Ehdr *)buffer;
	is_64 = (int)buffer[EI_CLASS] == ELFCLASS64;
	PRINT_MAGIC(header);
	PRINT_CLASS(is_64);
	PRINT_DATA(header);
	PRINT_VERSION(header);
	PRINT_OSABI(header);
	PRINT_ABIVERSION(header);
	PRINT_TYPE(header);
	printf("  Entry point address:\t\t     %p\n", (void *)(long)header->e_entry);
	close(file_d);
	return (0);
}
