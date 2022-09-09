#include <stdio.h>
/**
* @c printing size of char
* @i printing size of integer
* @lli printing size of long long int
* @f printing size of float
* Description: Printing sizes of types
*  Return: Always 0 (Success)
*/

int main(void)
{
char c;
int i;
double d;
long long int lli;
float f;
printf("Size of char: %c", (unsigned long)sizeof(c));
printf("Size of int: %d", (unsigned long)sizeof(i));
printf("Size of char: %d", (unsigned long)sizeof(lli));
printf("Size of char: %f", (unsigned long)sizeof(f));
return (0);
}
