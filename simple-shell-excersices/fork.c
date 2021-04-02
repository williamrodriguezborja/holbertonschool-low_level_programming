#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t actual_pid;
    pid_t first_child;
    pid_t father;

    printf("Before fork\n");
    father = fork(); 
    first_child = fork(); 
    if (first_child == -1)
    {
        perror("Error:");
        return (1);
    }

    if (first_child == 0) /*child*/
        sleep(2);

    printf("After fork\n");/* */
    actual_pid = getpid();
    printf("My pid is %u\n", actual_pid);
    return (0);
}