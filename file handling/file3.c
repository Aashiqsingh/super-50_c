#include<stdio.h>
#define SIZE 3

struct Student{
    int roll;
    char name[20];
    int age;
}s[SIZE];


void create()
{
    FILE *fp;
    fp = fopen("students.txt","w");

    for(int i=0;i<SIZE;i++)
    {
        printf("Enter Roll :");
        scanf("%d",&s[i].roll);
        fflush(stdin);
        printf("Enter Name :");
        gets(s[i].name);
        printf("Enter Age :");
        scanf("%d",&s[i].age);

        fprintf(fp,"%d\t%s\t%d\n",s[i].roll,s[i].name,s[i].age);
        
    }  
    fclose(fp); 

}

void display()
{
    FILE *fp;
    fp = fopen("students.txt","r");
    if(fp == NULL)
    {
        printf("FILE NOT EXISTS..");
    }
    else{
        printf("Roll\tName\tAge\n");

        for(int i=0;i<SIZE;i++)
        {
            fscanf(fp,"%d\t%s\t%d\n",&s[i].roll,s[i].name,&s[i].age);
            printf("%d\t%s\t%d\n",s[i].roll,s[i].name,s[i].age);
        }
        fclose(fp);
    }
}

void main()
{
    int choice;

    printf("\n1 - CREATE");
    printf("\n2 - DISPLAY");
    printf("\nEnter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: create();
                break;
        case 2: display();
                break;
    }
}

