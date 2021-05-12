#include "monty.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/**
 * read_file -
 * @filename: filename of monty file
 * @buffer: content to the buffer
 */
int read_file(char *filename, char buffer[])
{
	FILE *file;
	size_t i;

	if (access(filename, F_OK) == -1) /*guard condition*/
	{
		printf("Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	file = fopen(filename, "r"); /* read */
	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	char line[128]; /* or other suitable maximum line size */
	size_t size = 1024;

	for (i = 0; getline(&buffer, &size, file) != EOF ;i++) /* read a line */
	{
		exec_algo(buffer);
		fputs(line, stdout); /* write the line */
	}
	fclose(file);

	// for (i = 0; read(file_s, buffer, 1024) != EOF; i++)
	// {
	// 	printf("%s", buffer);
	// }
	return (EXIT_SUCCESS);
}
