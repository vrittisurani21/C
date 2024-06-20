#include<stdio.h>
void main()
{
	int a;
	printf("enter an integer val:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("a is even");
		scanf("%d",&a);
	}
	else
	{
		printf("a is odd");
		scanf("%d",&a);
	}
}
