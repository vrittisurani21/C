#include<stdio.h>
void main()
{
	double a,b;
	char c;
	printf("enter a choice:(+,-,*,/):");
	scanf("%c",&c);
	printf("enter first number:");
	scanf("%lf",&a);
	printf("enter second number:");
	scanf("%lf",&b);
	if(c=='+'){
		printf("%lf",a+b);
	}
	else if(c=='-'){
		printf("%lf",a-b);
	}
	else if(c=='*'){
		printf("%lf",a*b);
	}
	else if(c=='/'){
		if(b==0){
			printf("division is not possible");
		}
		else {
			printf("%lf",a/b);
		}
	}
	else {
		printf("enter a valid condition");
	}
}
