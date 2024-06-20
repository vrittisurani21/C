#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter an integer val:");
	scanf("%d",&a);
	printf("enter an integer val:");
	scanf("%d",&b);
	c=a,a=b,b=c;
	printf("%d %d",a,b);
}
