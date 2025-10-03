#include<stdio.h>
int main()
{
    int m,n;printf("Enter number of rows:");scanf("%d",&m);
    printf("Enter number of coloumn:");scanf("%d",&n);
    int a[m][n];
    printf("Enter elements of array:");
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++)
    {
     int sum=0;
     int j;   
     for(j=0;j<n;j++)
     {
        sum+=a[j][i];
     }
     printf("Sum of %dth coloumn=%d\n",i+1,sum);
    } 
    return 0;
}    