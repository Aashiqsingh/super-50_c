#include<stdio.h>
// sum of digit

int sumOfDigit(int num)
{
    if(num == 0)
    {
        return 0;
    }

    return num%10 + sumOfDigit(num/10);
}

void main()
{
    int ans = sumOfDigit(123);
    printf("%d ",ans);
}