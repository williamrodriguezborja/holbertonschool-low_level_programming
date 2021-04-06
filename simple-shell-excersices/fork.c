#include <stdio.h>
#include <unistd.h>
/**
 * main - fork example
 *
 * Return: Always 0.
 */
void main(void)
{
    pid_t actual_pid;
    pid_t first_child;
    pid_t father;

    father = getpid();
    first_child = fork(); 
    
    if (first_child == -1)
    {
        perror("Error:");
    }

    if (first_child == 0) /*child*/
    {
        printf("first child\n");/* */
    }
    actual_pid = getpid();
    printf("My pid is %u\n", actual_pid);
}