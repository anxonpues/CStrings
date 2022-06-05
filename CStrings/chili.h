#pragma once	
#include <conio.h>

constexpr char crlf[] = { '\n',0 };
void print(char* s);
void print(const char* s);
void read(char* buf, const unsigned char bufS);
void read(unsigned char* buf, const unsigned char bufS);
void read(char* buf, const unsigned short bufSize);
unsigned short strToShort(const unsigned char* str);
void shortToStr(const unsigned short value, char* outstr);

