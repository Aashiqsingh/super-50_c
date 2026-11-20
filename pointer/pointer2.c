#include<stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void main()
{
    int a=10,b=20;

    printf("a = %d and b = %d",a,b);

    swap(&a,&b);

    printf("\na = %d and b = %d",a,b);
}