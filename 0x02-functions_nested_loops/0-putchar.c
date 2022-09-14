#include "main.h"



int main(void)
{
	char ch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int i;

	for (i = 0; i < sizeof(ch); i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
