#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int last = arr[size - 1]; 

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }

    arr[0] = last;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
