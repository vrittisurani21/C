#include<stdio.h>
void main(){
	int i,j,sum=0,n,innersum;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		innersum=0;
		for(j=1;j<=i;j++){
			innersum+=j;
		}
		sum+=innersum;
	}
	printf("the sum of the sequence =%d\n",sum);
}
