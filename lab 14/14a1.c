#include<stdio.h>
void main(){
	int n,arr[n],i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("normal order:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\nreverse order:");
	for(i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
}
