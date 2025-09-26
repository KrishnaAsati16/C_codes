#include<stdio.h>

int main(){
    int arr[]={1,1,1,2,2,2,2,2,43,3,4,5,5,5,5,5,6,6,};
      int size = sizeof(arr) / sizeof(arr[0]);
    int freq[size];
    for(int i=0;i<size;i++){
        freq[i]=1;
    }
    for(int i=0;i<size;i++){
          int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
 printf("Element | Frequency\n");
    for (int i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("   %d    |    %d\n", arr[i], freq[i]);
        }
    }
return 0;

    }

