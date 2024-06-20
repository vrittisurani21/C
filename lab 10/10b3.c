#include<stdio.h>
void main(){
	int n,rem;
	printf("enter n:");
	scanf("%d",&n);
	int num=n;
	while(n!=0){
		rem=(rem*10)+(n%10);
		n=n/10;
	}
	if(num==rem){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
}
