/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <stdio.h>
void times_table(void)
{
	int i;
	int j;

	int numero = 0;

	for(i = 0; i<=9;i++)
	{
		for(j = 0; j<=9; j++)
		{
			numero = i * j;

			if(numero<9)
			{
				putchar(','); //putchar(44);
				putchar(' '); //putchar(32);
				putchar(' '); //putchar(32);
				putchar('0' + numero);
			}
			else{
				putchar('0' + numero/10);
				putchar('0' + numero%10);

				putchar(','); //putchar(44);
				putchar(' '); //putchar(32);
			}

		}
		putchar('\n');
	}
}
void times_table0(void)
{
	int i;
	int j;

	for(i = 0; i<=9;i++)
	{
		for(j = 0; j<=9; j++)
		{
			printf("%d, ",i*j);
		}
		printf("\n");
	}
}
int main()
{
	times_table();
	return 0;
}
