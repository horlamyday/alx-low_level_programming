#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *  
 * Retune: Always 0 (Successs/correct)
 */

int main9(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX /2;

if (n==0)
{
printf("%i is zero\n", n;)
}

elis if (n<0)
{
printf("%i is negative\n",n);
}

elis
{
printf("%i is positive\n",n);
}

return (0);

}
