#include<stdio.h>
void main(){
	int n,i=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			printf("%d\n",i);
		}
		i++;
	}
}
