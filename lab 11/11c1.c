#include<stdio.h>
void main(){
	int n,org,last,first,New;
	printf("enter a number:");
	scanf("%d",&n);
	org=n;
	last=n%10;
	while(n>=10){
		n/=10;
	}
	first=n;
	New=last;
	New*=10;
	org/=10;
	org%=(int)pwr(10(int)(log10)(org));
	New+=org;
	printf("%d\n",New);
}
