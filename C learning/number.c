#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if (n == 0){
        printf("%d", n);
        printf("It is Zero");
    }
    else if (n > 0)
    {
        printf("%d", n);
        printf("Positive");
    }
    else if(n < 0)
    {
        printf("%d", n);
        printf("Negative");
    }
    else
    {
        printf("%d", n);
        printf("Invalid Input");
    }
    
    
	return (0);
}

