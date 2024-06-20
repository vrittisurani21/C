#include<stdio.h>
void main(){
	int n,sum=0,i=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i=i+1;
	}
	if(sum==n){
		printf("perfect");
	}
	else{
		printf("not perfect");
	}
}
