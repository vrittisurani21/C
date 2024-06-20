#include<stdio.h>
void main(){
	int n,i;
	double e=1.0,factorial=1.0;
	printf("enter the number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		factorial*=i;
		e+=1.0/factorial;
	}
	printf("%lf\n",e);
}
