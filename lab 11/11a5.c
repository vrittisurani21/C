#include<stdio.h>
void main(){
	int n,i,f=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("the factorial of the given number is:%d",f);
}
