#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
* main - main function
* @n interger value to be tested
* Descripton: Function test whether a number is +ve or -v
* Return: 0
*
*/
int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
