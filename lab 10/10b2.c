#include<stdio.h>
void main(){
	int n,i=2,flag=0;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n/2){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0){
		printf("prime");
	}
	else{
		printf("not prime");
	}
}
