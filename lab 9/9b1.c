#include<stdio.h>
void main(){
	char U='A',l='a';
	printf("uppercase alphabets:\n");
	while(U<='Z'){
		printf("%c",U);
		U++;
	}
	printf("\nlowercase alphabets:\n");
	while(l<='z'){
		printf("%c",l);
		l++;
	}
}
