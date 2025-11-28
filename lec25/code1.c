#include<stdio.h>
int main()
{
    int height[9]={1,8,6,2,5,4,8,3,7};
    int i=0;
    int j=8;
    int h,w;
    int maxarea=0;

    while(i<j)
    {
        if(height[i]<height[j])
        {
            h=height[i];
        }
        else
        {
           h=height[j]; 
        }

        w=j-i;

        int area=h*w;

        if(area>maxarea)
        {
            maxarea=area;
        }

        if(i<j)
        {
              i++;
        }
        else
        {
            j--;
        }

    }
    printf("%d",maxarea);
}