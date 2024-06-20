#include<stdio.h>
void main(){
	int a,b;
	printf("enter an integer val:");
	scanf("%d",&a);
	printf("enter an integer val:");
	scanf("%d",&b);
	a=a+b,b=a-b,a=a-b;
	printf("%d %d",a,b);
}
