#include<stdio.h>
void main(){
	int n,arr[n],max,min,sum=0,i;
	float avg;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
		if(i==0){
			max=arr[i];
			min=arr[i];
		}
		else if(arr[i]>max){
			max=arr[i];
		}
		else if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("maximum:%d\n",max);
	printf("minimum:%d\n",min);
	printf("sum:%d\n",sum);
	printf("average:%d\n",avg);
}
