#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="hello";
    int ln= strlen(str);
    for(int i=ln-1;str[i]>='\0';i--){
     printf("%c\n",str[i]); 
  //  printf("%s",str[0]);

}
}