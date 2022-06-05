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

unsigned short strToShort(const unsigned char* str)
{
	unsigned short usi = 0;
	// found in str where finish digits (base 10)
	char pos = 0;
	while (*(str+pos) >= '0' && *(str+pos) <= '9')
	{
		pos++;
	}
	for (char i = 0; i <= pos-1; i++)
	{
		usi = usi * 10 + (*(str + i)) - '0';
	}
	return usi;
}
unsigned long long strToLongLong(const unsigned char* str)
{
	unsigned long long usi = 0;
	// found in str where finish digits (base 10)
	char pos = 0;
	while (*(str + pos) >= '0' && *(str + pos) <= '9')
	{
		pos++;
	}
	for (char i = 0; i <= pos - 1; i++)
	{
		usi = usi * 10 + (*(str + i)) - '0';
	}
	return usi;
}
void shortToStr(const unsigned short value, char* outstr)
{
	// first look how many digits has
	unsigned char digits = 0;
	unsigned short val = value;
	
	while (val)
	{
		digits++;
		val = val / 10;
	}
	val = value;
	for (unsigned char i = 0; i < digits ; i++)		//	esto que sigue es txapuzero no me gusta
	{
		unsigned short div = 1;
		for (unsigned short j = digits -i; j>1 ; j--)
			div *= 10;
		*outstr = val / div +'0';
		outstr++;
		val = val % div;
	}
	*outstr = 0;
}

void longlongToStr(const unsigned long long value, char* outstr)
{
	// first look how many digits has
	unsigned char digits = 0;
	unsigned long long val = value;

	while (val)
	{
		digits++;
		val = val / 10;
	}
	val = value;
	for (unsigned char i = 0; i < digits; i++)		//	esto que sigue es txapuzero no me gusta
	{
		unsigned short div = 1;
		for (unsigned short j = digits - i; j > 1; j--)
			div *= 10;
		*outstr = val / div + '0';
		outstr++;
		val = val % div;
	}
	*outstr = 0;
}

unsigned long long fibonacci(unsigned long long num)
{
	if (num == 1)
		return 1;
	else if (num == 2)
		return 1;
	else
		return fibonacci(num - 1) + fibonacci(num - 2);
	return 0;
}
