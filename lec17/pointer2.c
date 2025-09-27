#include<stdio.h>

int sum(int *x,int *y){
     *x=5;
     *y=10;
     int b=(*x)+(*y);
    return 0;
}
int main (){
    int x=10;
    int y=20;
    int data=  sum(&x,&y);
    printf("%d",data);
    printf("%d",x+y);
}
