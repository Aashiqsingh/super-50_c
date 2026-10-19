// recursion : a function that calls itself
#include<stdio.h>


void demo(int n)
{
    if(n==0)
    {
        return;
    }

    printf("%d ",n);  // 5 4 3 2 1

    demo(n-1);
}

void main()
{
    demo(5);
}