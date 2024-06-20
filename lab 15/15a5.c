#include<stdio.h>
#include<string.h>
void main(){
	char str[100];
	printf("enter a string:");
	gets(str;sizeof(str);stdin);
	str[strcspn(str,"\n")]='\0';
	printf("string:%s\n",str);
	printf("length of string:%d\n",strlen(str));
}
