#include<stdio.h>

// void reverseNum(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     int rem=n%10;
//     printf("%d",rem);
//     reverseNum(n/10);
// }

int reverse(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }

    return reverse(n/10,rev*10+n%10);
}
// 1234 , 0
// 123 , 4
// 12 , 43
// 1 , 432
// 0 , 4321

void main()
{
    // reverseNum(1785);

    printf("%d",reverse(1234,0));
}