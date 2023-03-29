#include <stdio.h>

int main() {
   int arr[5] = {12, 56, 34, 78, 100};
   int max = arr[0]; //initialize max to the first element of the array

   //loop through the array and update max if a larger value is found
   for(int i=1; i<5; i++) {
      if(arr[i] > max) {
         max = arr[i];
      }
   }

   printf("The largest element in the array is %d", max);
   return 0;
}
