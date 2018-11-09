#include <stdio.h>
#include <conio.h>

int main()
{

	int a = 10;
	int b = 3, c = 7;
	printf("\n%d",a<<2);
	printf("\n%d",a>>2);
	printf("\n%d",a+b*2);
	printf("\n%d",a%b);
	printf("\n%d", a==b);
	printf("\n%d", a>b);
	printf("\n%d", a++);
	printf("\n%d", ++a);
	_getch();
	return 0;

}