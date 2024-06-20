#include<stdio.h>
void main(){
	char c;
    printf("enter character:");
    scanf("%c",&c);
    (c>='a' && c<='z')||(c>='A' && c<='Z')?printf("alphabet"):printf("not an alphabet");
  
}
