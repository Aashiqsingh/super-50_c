#include <stdio.h>
#define SIZE 2
struct student
{
    int roll;
    char name[20];
    int age;
    float marks;
    int status;

} s[SIZE];

void create();
void display();
void delete(int id)
{
    int flag = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (id == s[i].roll)
        {
            s[i].status = 0;
            flag = 0;
            printf("Student record deleted sucessfully..");
            break;
        }
        else
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("Student not found!!");
    }
}

void searchById(int id)
{
    int flag=0;
    for (int i = 0; i < SIZE; i++)
    {
        if (id-1 == s[i].roll)
        {
            printf("\nRoll = %d", s[id].roll);
            printf("\nName = %s", s[id].name);
            printf("\nAge = %d", s[id].age);
            printf("\nMarks = %f", s[id].marks);
            flag=0;
            break;
        }
        else
        {
            flag=1;          
        }
    }
    if(flag==1)
    {
        printf("Student not found!!");
    }
}

void main()
{
    // struct student s[SIZE];

    int choice, id;

    while (choice != 6)
    {
        printf("\n1 - CREATE");
        printf("\n2 - DISPLAY");
        printf("\n3 - DELETE");
        printf("\n4 - SEARCH");
        printf("\n5 - UPDATE");
        printf("\n6 - EXIT");
        printf("\nEnter Your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;

        case 3:
            printf("Enter id for delete :");
            scanf("%d", &id);
            delete(id);
            break;

        case 4:
            printf("Enter id for particular search :");
            scanf("%d", &id);
            searchById(id);
            break;
        }
    }
}

void create()
{
    for (int i = 0; i < SIZE; i++)
    {
        // s[i].roll = 101 + i
        printf("Enter roll :");
        scanf("%d", &s[i].roll);
        fflush(stdin);
        printf("Enter name :");
        gets(s[i].name);
        printf("Enter Age :");
        scanf("%d", &s[i].age);
        printf("Enter Marks :");
        scanf("%f", &s[i].marks);

        s[i].status = 1;
    }
}

void display()
{
    printf("Roll\tName\tAge\tMarks\n");
    printf("----------------------------\n\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (s[i].status == 1)
        {
            printf("%d\t%s\t%d\t%.2f\n", s[i].roll, s[i].name, s[i].age, s[i].marks);
        }
    }
}