#include<stdio.h>
void main(){
	int n,arr[n],evencount=0,oddcount=0,i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elments:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			evencount++;
		}
		else if(arr[i]%2==1){
			oddcount++;
		}
	}
	printf("number of even numbers:%d\n",evencount);
	printf("number of odd numbers:%d\n",oddcount);
}
