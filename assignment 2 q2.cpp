#include <stdio.h>

int main() {
    int arr[100], n, i, largest, secondLargest, smallest, secondSmallest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    secondLargest = arr[0];
    smallest = arr[0];
    secondSmallest = arr[0];

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", secondLargest);
    printf("The second smallest element in the array is: %d\n", secondSmallest);

    return 0;
}