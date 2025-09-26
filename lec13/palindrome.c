#include<stdio.h>
int main(){
    int arr[]={1,2,3,2,1};
    int n=sizeof(arr);
    int i,ispalindrome=1;
    for(i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            ispalindrome=0;
            break;
        }
    }
    if(ispalindrome)
    printf("array is palindrome");
    else
    printf("array is not a palindrome");
}