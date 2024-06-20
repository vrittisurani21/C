#include<stdio.h>
void main(){
	int n,digit,count,i;
	int frequency[10]={0};
	printf("enter an integer:");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		frequency[digit]++;
		n/=10;
	}
	printf("frequeny of digit:\n");
	for(i=0;i<10;i++){
		if(frequency[i]>0){
			printf("digit:%d\n",i,frequency[i]);
		}
	}
}
