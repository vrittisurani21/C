#include<stdio.h>
void main(){
	int a,b;
	char c;
	printf("enter choice(+,-,*,/):");
	scanf("%c",&c);
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	switch(c)
	{
		case '+':printf("a+b=%d",a+b);
		break;
		case '-':printf("a-b=%d",a-b);
		break;
		case '*':printf("a*b=%d",a*b);
		break;
		case '/':printf("a/b=%d",a/b);
		break;
		default:printf("enter valid choice");
	}
}
