#include <stdio.h>

int main(){
    int n;
    printf("\nEnter no to print table: ");
    scanf("%d",&n);
    for(int i=0;i<=10;i++){
        printf("\n%d",i*n);
    }
    return 0;
}