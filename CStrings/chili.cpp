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

void read(unsigned char* buf, const unsigned char bufS)
{
	unsigned char bS = 0;
	for (unsigned char c = _getch(); c != 13 && bS < bufS - 1; c = _getch(), buf++)
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
	for (char c = _getch(); (c != 13) && ((buf +1)  < pEnd); c = _getch(), buf++)
	{
		_putch(c);
		*buf = c;
	}
	*buf = 0;
}

unsigned short strToShort(unsigned char* str)
{
	unsigned short usi = 0;
	// found in str where finish digits (base 10)
	char pos = 0;
	while (*(str+pos) >= '0' && *(str+pos) <= '9')
	{
		pos++;
	}
	for (char i = pos-1; i >= 0; i--)
	{
		usi = usi * 10 + (*(str + i)) - '0';
	}
	return usi;
}
