#include<stdio.h>
int main(){
	char c;
	printf("Enter the Character : ");
	scanf("%c",&c);
	if (c>='a' && c<='z'){
		printf("%c is a lowercase alphabet",c);
	}
	else if (c>='A' && c<='Z'){
		printf("%c is a uppercase alphabet",c);
	}
	else {
		printf("%c is not a alphabet",c);
	}
	return 0;
    
}