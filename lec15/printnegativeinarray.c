#include<stdio.h>

int main(){
    int arr[5]={-1,-2,3,-4,-5};
    for(int i=0;i<5;i++){
        if(arr[i]<0){
            printf("first negative number is");
            printf("%d\n",arr[i]);
            break;
        }
    }
}