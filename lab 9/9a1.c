#include<stdio.h>
void main(){
	int i=1,n,sum=0,temp;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			temp=(-i);
			sum=sum+temp;
		}
		else{
			sum+sum+i;
		}
		i++;
	}
	printf("%d",sum);
}
