#include<stdio.h>
void main(){
	int i=1,n,even=0,odd=0;
	printf("enter a number:");
	scanf("%d",&n);
	printf("\neven number:");
	while(i<=n){
		if(i%2==0){
			printf("%d ",i);
			even++;
		}
		i++;
	}
	printf("\nodd number:");
	i=1;
	while(i<=n){
		if(i%2==1){
			printf("%d ",i);
			odd++;
		}
		i++;
	}
	printf("\ntotal even number=%d",even);
	printf("\ntotal odd number=%d",odd);
}
