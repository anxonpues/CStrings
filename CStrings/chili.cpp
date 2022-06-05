#include "chili.h"


void print(char* s)
{
	for (char c; (c = *s) != 0; s++)
		_putch(*s);
}

void print(const char* s)
{
	for (char c; (c = *s) != 0; s++)
		_putch(*s);
}

void read(char* buf, const unsigned char bufS)
{
	unsigned char bS = 0;
	for (char c = _getch(); c != 13 && bS < bufS - 1; c = _getch(), buf++)
	{
		bS++;
		_putch(c);
		*buf = c;
	}
	*buf = 0;
}

void read(char* buf, const unsigned short bufSize)
{
	const char* const pEnd = buf + bufSize;
	for (char c = _getch(); c != 13 && buf < pEnd; c = _getch(), buf++)
	{
		_putch(c);
		*buf = c;
	}
	*buf = 0;
}
