#include <stdio.h>

int main(void)
{
	char f,m,l;
	int age;

	printf("enter your intials and age: ");
	scanf("%c %c %c %d", &f, &m,&l, &age);
	printf("My initails are: %c%c%c and my age is %d.\n",f,m,l,age);
	return(0);
}
