#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	a>b?printf("%d",a*c):printf("%d",b*c);
}
