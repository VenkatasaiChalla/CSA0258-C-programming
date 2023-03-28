#include <stdio.h>
int main() {
    int num, digit,temp, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(temp = num; temp > 0; temp /= 10) {
        digit = temp % 10;
        sum += digit;
    }
    
    printf("Sum of digits: %d", sum);
    
    return 0;
}