#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,r1,r2;
	printf("enter values(a,b,c):");
	scanf("%d %d %d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("%d %d",r1,r2);
}
