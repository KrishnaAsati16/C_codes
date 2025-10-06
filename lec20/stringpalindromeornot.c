#include<stdio.h>
#include<string.h>
int main(){
    char Str[]="madam";
    int n=sizeof(Str);
    int i,ispalindrome=1;
    for(i=0;i<n/2;i++){
        if(Str[i]!=Str[n-1-i]){
            ispalindrome=0;
            break;
        }
    }
    if(ispalindrome==0) 
    printf("Str is palindrome");
    else
    printf("Str is not a palindrome");
}
