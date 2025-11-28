#include<stdio.h>
struct address
{
    int pincode;
};

struct student 
{
    char name[50];
    int Roll;
    int age;
    struct address s2;
};

int main()
{
    struct student s1;
    

   printf("\nEnter Name : ");
    gets(s1.name);

    printf("Enter Age : ");
    scanf("%d",&s1.age);

    printf("Enter Roll No. : ");
    scanf("%d",&s1.Roll);

    printf("\nDetails are : \n");

    printf("Name : %s",s1.name);
    printf("\nAge : %d",s1.age);
    printf("\nRoll no. : %d",s1.Roll);

    s1.s2.pincode=100;

    printf("\nPincode : %d",s1.s2.pincode);

    
}