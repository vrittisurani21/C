#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	printf("enter c value:");
	scanf("%d",&c);
	if(a>=b || a>=c)
	{
		printf("%d is 2nd largest",a);
	}
	else if(b>=a || b>=c)
	{
		printf("%d is 2nd largest",b);
	}
	else if(c>=a || c>=b)
	{
		printf("%d is 2nd largest",c);
	}
}
