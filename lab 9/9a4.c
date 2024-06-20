#include<stdio.h>
void main(){
	int n,i=1,ans=1;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=n){
		ans=ans*i;
		i++;
	}
	printf("ans%d",ans);
}
