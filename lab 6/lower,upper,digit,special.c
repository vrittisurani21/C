#include<stdio.h>
void main()
{
	char c;
	printf("enter character:");
	scanf("%c",&c);
	if(c>='a'&&c<='z')
	{
		printf("lower case=%c",c);
	}
	else if(c>='A'&&c<='Z')
	{
		printf("upper case=%c",c);
	}
	else if(c>='0'&&c<='9')
	{
		printf("digit=%c",c);
	}
	else
	{
		printf("special case");
	}
}
