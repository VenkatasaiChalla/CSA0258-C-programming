#include <stdio.h>
int main() {
    int num,temp,reversed = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(temp = num; temp > 0; temp /= 10) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
    }
    
    printf("Reverse of %d is %d", num, reversed);
    
    return 0;
}