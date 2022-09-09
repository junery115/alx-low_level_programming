#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
* main - starting point of program
* @n interger value to be tested
* Descripton: Function test wether a number is +ve or -v 
*return 0 
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  if (n > 0)
  {
    printf("%d is positive ", n);
  }
else if ( n == 0)
  {
    printf("%d is zera", n);
  }
else 
  {
    printf("%d is negative ", n);
  }
	return (0);
}
