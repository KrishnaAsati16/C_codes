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
    printf("Diagonal element of matrix are:");  
    for(int i=0;i<m;i++)
    {
     for(int j=0;j<n;j++)
      if(i==j)
       printf("%d ",a[i][j]);
    }
    return 0;
}      