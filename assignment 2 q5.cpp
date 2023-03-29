#include <stdio.h>

int main() {
    int arr[10] = {4, 5, 7, 9, 2, 3, 8, 1, 6, 10}; // Example array
    int size = 10; // Size of the array
    int max_diff = 0; // Variable to store the maximum difference
    int i, j; // Loop variables

    // Loop through the array to find the maximum difference
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            int diff = arr[j] - arr[i]; // Calculate the difference between the two elements

            // Update the maximum difference if the current difference is greater
            if(diff > max_diff) {
                max_diff = diff;
            }
        }
    }
// Print the maximum difference
    printf("Maximum difference is: %d\n", max_diff);

    return 0;
}