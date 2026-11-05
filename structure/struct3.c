#include<stdio.h>

struct employees{
    int id;
    char name[20];
    int salary;
};

void main()
{
    struct employees e[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter Id :");
        scanf("%d",&e[i].id);
        fflush(stdin);
        printf("Enter Name :");
        gets(e[i].name);
        printf("Enter salary :");
        scanf("%d",&e[i].salary);
    }

    printf("Id\tName\tSalary\n");

    for(int i=0;i<3;i++)
    {
        printf("%d\t%s\t%d\n",e[i].id,e[i].name,e[i].salary);
    }
}