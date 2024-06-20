#include<stdio.h>
void main(){
	int i,n,a=0,b=1,c;
	printf("enter n:");
	scanf("%d",&n);
	printf("fibonacci series:\n");
	for(i=1;i<=n;i++){
		c=a+b;
		printf("%d\n",c);
		a=b;
	    b=c;
	}
}
