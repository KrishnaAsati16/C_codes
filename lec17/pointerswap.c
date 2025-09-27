#include<stdio.h>
int swap(int *a,int*b){
    *a=5;
    *b=10;

}
int main(){
    int a=5;
    int b=10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b); 
    printf("after swap: a = %d, b = %d\n", b, a);

}