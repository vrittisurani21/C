#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter height of triangle:");
	scanf("%d",&a);
	printf("enter base of triangle:");
	scanf("%d",&b);
	printf("enter hypotenuse of triangle:");
	scanf("%d",&c);
	if(a==b && b==c && c==a)
	{ 
	printf("triangle is equilateral");
	}
	else if(a==b || b==c || c==a)
	{
		printf("triangle is isosceles");
	}
	else if (((a*a)+(b*b))==(c*c))
	{
		printf("triangle is right angled");
	}
	else{
		printf("triangle is scalene");
	}
}
