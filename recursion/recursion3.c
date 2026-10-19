#include<stdio.h>

int sumOfDigit(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n%10 + sumOfDigit(n/10);  // 3 + sumOfDigit(123/10)
                                    //  3 + 2 + sumOfDigit(12/10)
                                    //  3 + 2 + 1 + sumOfDigit(1/10)
                                    //  3 + 2 + 1 + 0 + sumOfDigit(0/10)
}                                                                    


void main()
{
    int ans;
    ans = sumOfDigit(123);
    printf("Sum of digits = %d",ans);
}