#include<stdio.h>


void main()
{
    // int a = 10;
    // int b = a;

    // printf("\na = %d",a);
    // printf("\nb = %d",b);

    // b = 20;
    // printf("\nb = %d",b);
    // printf("\na = %d",a);

    int a = 10;
    printf("\nvalue of a = %d",a);
    printf("\naddress of a = %u",&a);

    // pointer 

    int *p;
    p = &a;

    printf("\naddress of a = %u",p);
    printf("\nvaue of a = %d",*p);


    // *p = 20;
    ++*p;
    printf("\nvalue of a = %d",*p);
    printf("\nvalue of a = %d",a);

    printf("\naddress of *p = %u",&p);

    int **q;
    q = &p;

    printf("\naddress of p = %u",&p);
    printf("\naddress of p = %u",q);
    printf("\nvalue of p = %u",*q);
    printf("\nvalue of a = %d",**q);

    ++**q;
    printf("\nvalue of a = %d",a);

}

// pointer : pointer is a variable that store address of another variable.