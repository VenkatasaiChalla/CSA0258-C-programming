#include <stdio.h>

int main() {
    int size, i, j = 0, k = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size], even[size], odd[size];
    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[j] = arr[i];
            j++;
        }
        else {
            odd[k] = arr[i];
            k++;
        }
    }
    printf("\nEven elements: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}