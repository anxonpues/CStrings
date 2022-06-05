#include "chili.h"


int main()
{
	
	{
		char msg1[] = { 'P','r','o','t','o','c','o','l',0 };
		print(msg1);
		print(crlf);
		char msg2[] = "Puta polizia korrupta de mierda";
		print(msg2);
		print(crlf);
		int lm1 = sizeof(msg1);		// cuenta el 0 final explicito
		int lm2 = sizeof(msg2);		// cuenta el 0 final implicito en los "" 
	}
	{
		// can create a pointer that points directly to the string itself as literal
		const char* pmsg3 = "LOCKED DOOR";		// but need to be declared as const because can not change the contents
												// or maybe yes, Chili says it is in part of READ_ONLY_MEMORY
												// to change same or part of the string need to make a copy in an
												// array and then change whatever need. 
		print(crlf);
		print(pmsg3);
		print(crlf);
		print(crlf);
	}
	{
		char c = _getch();
		_putch(c);
	}
	{
		print(crlf);
		constexpr unsigned char bufS = 80;
		char buf[bufS]{ 0 };
		read(buf, bufS);
		print(crlf);
		print(crlf);
		print(buf);
		print(crlf);
		print(crlf);
	}
	{
		print(crlf);
		print("Write some shit:  ");
		constexpr unsigned short bufSize = 500;
		char buf2[bufSize]{ 0 };
		read(buf2, bufSize);
		print(crlf);
		print(crlf);
		print("You wrote this shit:  ");
		print(buf2);
		print(crlf);
		print(crlf);
	}
	{
		// ask a number, entered as string and convertd to a short
		constexpr unsigned char size = 5;
		unsigned char num[size]{0};
		read(num, size);
		unsigned short time = strToShort(num);

		for (unsigned char t = 0; t < time; t++)
		{
			print(crlf);
			print("kanzer pa los putos polis y pal amo del puto kurro too!");
		}
	}
	{
		// falta hacer llamada a shortToStr
		unsigned short prb = 35017;
		char bufout[12]{ 0 };
		shortToStr(prb, bufout);
		print(crlf);
		print(bufout);
	}

	while ( !_kbhit() )
		;
	return 0;
}
