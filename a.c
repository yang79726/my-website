#include <stdio.h>
#include <stdbool.h>

void swap(int *ip, int *jp) {
    int temp = *ip;
    *ip = *jp;
    *jp = temp;
}

void bubbleSort(int array[], int n) {
   int l, m;
   bool swapped;
   for(l = 0; l < n-1; l++) {
       swapped = false;
       for(m = 0; m < n-l-1; m++) {
           if(array[m] > array[m+1]) {
               swap(&array[m], &array[m+1]);
               swapped = true;
           }
       }
       // If no two elements were swapped by inner loop, then break
       if(swapped == false) {
           break;
       }
   }
}

void printArray(int array[], int size) {
    int l;
    for(l = 0; l < size; l++)
        printf("%d ", array[l]);
    printf("\n");
}

int main() {
    int array[] = {48, 34, 57, 28, 21, 31, 90};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    printf("Sorted array: \n");
    printArray(array, n);
    return 0;
}