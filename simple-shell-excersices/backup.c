#include "header.h"

#define DELIMITER ("---:,")

int length_string(char *string) 
{
  if (!string)
    return (0);
  if (!*string)
    return (0);
  return (1 + length_string(string + 1));
}

int main(void)
{
  int i, j;
  char *token;
  char *test[] = {
    "hola---como,estas",  
    "hola--como---,estas",
    "hola-como-,estas",
    "hola:como-,---estas",
    NULL
  };
 for (j = 0; test[j]; j++)
  {
    for (i = 0;1 ;i++)
    { 
			token = strtok((i == 0) ? test[j] : NULL, DELIMITER);
      if (!token)
         	break;
      if  (write(STDOUT_FILENO, token, length_string(token)) == -1)
      {
        perror("Error\n");
        return (EXIT_FAILURE);
      } 
    }
  }
	
	return (EXIT_SUCCESS);
} 