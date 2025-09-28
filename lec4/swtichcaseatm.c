#include <stdio.h>

int main(){
     int balance,amount,deposit,pin1,ch;int pin =1234;
  printf("balance in atm:");
  scanf("%d",&balance);
  printf("1-->check balance\n2-->cash withdrawal\n3-->deposit amount\n4-->exit\nchoose action:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
           printf("enter pin:");
           scanf("%d",&pin1);
           if(pin==pin1)
            printf("current balance=%d",balance);
           else{
            printf("wrong pin entered");
            break;} 
           break;
    case 2:printf("\nenter amount to be withdarwed:");
           scanf("%d",&amount);
           printf("enter pin:");
           scanf("%d",&pin1);
           if(pin==pin1){
            printf("thanks for transaction");
            printf("current balance=%d",balance-amount);}
           else{
            printf("wrong pin entered");
            break;} 
           break;
    case 3:printf("\nenter amount to be deposited:");
           scanf("%d",&deposit);
           printf("enter pin:");
           scanf("%d",&pin1);
           if(pin==pin1){

            printf("amount deposited!");
            printf("current balance after deposit=%d",balance+deposit);} 
           else{
            printf("wrong pin entered");
            break; }
           break;
    case 4:break;
    default:break;
  } 
  return 0; 
}