#include<stdio.h>

struct student{
    int roll;
    char name[20];
    int age;
};


void getDetail(struct student *s)
{
    printf("Enter roll :");
    scanf("%d",&s->roll);
    fflush(stdin);
    printf("Enter name :");
    gets(s->name);
    
    printf("Enter Age :");
    scanf("%d",&s->age);
    
}   

void displayDetail(struct student *s)
{
    printf("\nRoll = %d",s->roll);
    printf("\nName = %s",s->name);
    printf("\nAge = %d",s->age);
}

void main()
{

    struct student s;

    getDetail(&s);
    displayDetail(&s);
}