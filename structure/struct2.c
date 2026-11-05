#include<stdio.h>

struct employees{
    int id;
    char name[20];
    int salary;
}e1,e2;

void main()
{
    // struct employees e 

    printf("Enter id :");
    scanf("%d",&e1.id);
    fflush(stdin);
    printf("Enter name :");
    gets(e1.name);
    printf("Enter salary :");
    scanf("%d",&e1.salary);

    printf("Enter id :");
    scanf("%d",&e2.id);
    fflush(stdin);
    printf("Enter name :");
    gets(e2.name);
    printf("Enter salary :");
    scanf("%d",&e2.salary);



    printf("Id\tName\tSalary\n");
    printf("%d\t%s\t%d\n",e1.id,e1.name,e1.salary);
    printf("%d\t%s\t%d\n",e2.id,e2.name,e2.salary);


}