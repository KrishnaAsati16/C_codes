#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int height[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    return 0;
}