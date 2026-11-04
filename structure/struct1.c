// structure : structure is also know as user-defined datatype.
// structure is a collection of different datatypes.
// structure is defined with struct keyword.
// structure contained data members / variable.
// to access data member of structure need to create object / variable.


#include<stdio.h>

struct student{
    int roll;
    char name[20];
    int age;

};

int main()
{
    struct student stu1,stu2;

    stu1.roll = 1;
    strcpy(stu1.name,"palak");
    stu1.age = 17;

    stu2.roll = 2;
    strcpy(stu2.name,"chensy");
    stu2.age = 18;




    printf("\nRoll = %d",stu1.roll);
    printf("\nName = %s",stu1.name);
    printf("\nAge = %d",stu1.age);

    printf("\nRoll = %d",stu2.roll);
    printf("\nName = %s",stu2.name);
    printf("\nAge = %d",stu2.age);
    
}