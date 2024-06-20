#include<stdio.h>
void main(){
	int n,digits;
	printf("enter n:");
	scanf("%d",&n);
	while(n>0){
		digits=n%10;
		printf("%d\n",digits);
		n=n/10;
	}
}
