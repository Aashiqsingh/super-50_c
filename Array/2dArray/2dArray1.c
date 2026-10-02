#include<stdio.h>
#define SIZE 4 // global variable
void main()
{
    // int a[]
    int a[SIZE];

    printf("Enter elements :\n");
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements entered are :\n");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",a[i]);
    }
}