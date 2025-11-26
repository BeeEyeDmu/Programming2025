// echo
#include <stdio.h>
#include <conio.h>

int main()
{
	int c;

	while ((c = _getch()) != EOF)
		_putch(c);
}