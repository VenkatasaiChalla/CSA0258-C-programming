#include <stdio.h>
#include <limits.h>

int minJumps(int arr[], int n) {
   
    if (arr[0] == 0) {
        return -1;
    }
    
    int jumps = 1;  // Initialize the number of jumps
    int maxReach = arr[0];  // Maximum index that can be reached from current position
    int steps = arr[0];  // Steps remaining at current index
    

    for (int i = 1; i < n; i++) {
        // If we have reached the end of the array, return the number of jumps
        if (i == n - 1) {
            return jumps;
        }
        
    
        maxReach = (i + arr[i] > maxReach) ? i + arr[i] : maxReach;
        
       
        steps--;
        
      
        if (steps == 0) {
            jumps++;  // Increase the number of jumps
            
       
            if (i >= maxReach) {
                return -1;
            }
            
     
            steps = maxReach - i;
        }
    }
    
    
    return -1;
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min_jumps = minJumps(arr, n);
    
    if (min_jumps == -1) {
        printf("End is not reachable");
    } else {
        printf("Minimum number of jumps to reach the end: %d", min_jumps);
    }
    
    return 0;
}
