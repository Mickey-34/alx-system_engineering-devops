#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N_ZOMBIES 5

/**
 * infinite_while - loop forever
 *
 *
 * Return: Never
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - The zombie processes
 *
 *
 * Return: Never
 */
int main(void)
{
	int q = 0;
	int z = 0;

	while (z++ < N_ZOMBIES)
	{
		q = fork();
		if (q)
			printf("Zombie process created, PID: %d\n", q);
		else
			return (EXIT_SUCCESS);
	}
	return (infinite_while());
}
