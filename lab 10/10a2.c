#include<stdio.h>
void main(){
	int n,i=1,sum=0,var;
	float avg;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&var);
		sum=sum+var;
		i++;
}
	printf("sum=%d,avg=%d",sum,(sum/n));
}
