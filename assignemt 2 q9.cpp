#include <stdio.h>

int main() {
    int n, arr[100], i, j, temp;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("Enter the numbers:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("The numbers arranged in descending order are given below:\n");
    for(i=0; i<n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}