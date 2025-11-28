// Structure

#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int Roll;
    int age;
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


    printf("\nName : %s",s1.name);
    printf("\nAge : %d",s1.age);
    printf("\nRoll no. : %d",s1.Roll);
    
}