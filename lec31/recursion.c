// #include <stdio.h>

// int main(){
//     int palindrome(int arr[],int i ,int j){
//     if(i>=j){
//         return 1;
//     }
//     if(arr[i]!=arr[j]){
//         return2;
//     }
//     return palindrome(arr,++i,--j)
//     return 0;
// }}


#include <stdio.h>

int palindrome(int arr[], int i, int j) {
    if (i >= j) {
        return 1;
    }
    if (arr[i] != arr[j]) {
        return 0;
    }
    return palindrome(arr, i + 1, j - 1);  
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (palindrome(arr, 0, n - 1)) {
        printf("Array is a palindrome\n");
    } else {
        printf("Array is not a palindrome\n");
    }

    return 0;
}