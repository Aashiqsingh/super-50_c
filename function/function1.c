#include<stdio.h>


// without argument withut return type

void palak()
{
    printf("Hello i am palak ");
}


// with argument without return type

void add(int a,int b)
{
    printf("\nAddition = %d",a+b);
}


void main()
{
    // palak();
    // palak();
    // palak();

    int x,y;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);

    // add(13,15);
    add(x,y);
}