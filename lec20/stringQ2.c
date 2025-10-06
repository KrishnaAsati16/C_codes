#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int count=0;
    int ln=  strlen(str); 
    
    for (int i = 0; i<ln-1;i++){
    
    for (int j = i+1 ;j<ln ; j++){
        if(str[i]==str[j]){
            count++;
        }
    }
        }
        printf("total duplicate char:%d\n",count);
          return 0;
    }

