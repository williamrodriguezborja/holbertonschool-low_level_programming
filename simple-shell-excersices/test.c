#include <string.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char text[] = "hola---como,estas";
	printf("%s", strtok(text,  "---:"));
	return (EXIT_SUCCESS);
} 
