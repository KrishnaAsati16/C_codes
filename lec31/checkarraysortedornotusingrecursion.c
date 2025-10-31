
#include <stdio.h>

int sorted(int arr[], int i, int j) {
    if (i >= j) {
        return 1;  
    }
    if (arr[i] > arr[i + 1]) {
        return 0;  
    }
    return sorted(arr, i + 1, j);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (sorted(arr, 0, n - 1)) {
        printf("Array is sorted in ascending order\n");
    } else {
        printf("Array is not sorted\n");
    }

    return 0;
}