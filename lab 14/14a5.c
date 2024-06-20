#include<stdio.h>
void main(){
	int height[5];
	int weight[5];
	int i,count=0;
	printf("enter the height and weight of 5 people:\n");
	for(i=0;i<5;i++){
		printf("person:%d\n",i+1);
		printf("height(in cm):");
		scanf("%d",&height[i]);
		printf("weight(in kg):");
		scanf("%d",&weight[i]);
		if(height[i]>170 && weight[i]<50){
			count++;
		}
	}
	printf("number of people with height greater than 170 and weight less than 50:%d\n",count);
}
