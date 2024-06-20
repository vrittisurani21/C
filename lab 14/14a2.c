#include<stdio.h>
void main(){
	int n,arr[n],i,poscount=0,negcount=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			poscount++;
		}
		else if(arr[i]<0){
			negcount++;
		}
	}
	printf("number of positive numbers:%d\n",poscount);
	printf("number of negative numbers:%d\n",negcount);
}
