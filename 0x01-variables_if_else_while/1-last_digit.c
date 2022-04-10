
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct) 
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("Last digi of %i is %i and is greater than 5\n" , n, n % 100);
}
else if (n % 10 == 0)
prnitf("Last digi of %i is %i and is 0\n", n, n % 10);
}
else
{
printf("Last digi of %i is %i and is less then 6 and not 0\n", n, n % 10);
}

	return (0);
}
