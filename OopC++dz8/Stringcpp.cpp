#include "Header.h"
#include "String.h"

int main()
{
	setlocale(0, "");
	String s1("Hello");
	String s2("World");
	String s3;
	s3 = s1 + s2;
	s3.output();
	s3 = s1 + "World";
	s3.output();
	s3 = "Hello" + s2;
	s3.output();
	s3 = s1 + '!';
	s3.output();
	s3 = '!' + s2;
	s3.output();
	
}