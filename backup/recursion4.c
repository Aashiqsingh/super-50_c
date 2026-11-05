#include<stdio.h>
// reverse

// void reverse(int num)
// {
//     if(num==0)
//     {
//         return 0;
//     }
//     int rem = num % 10;
//     printf("%d",rem);
//     reverse(num/10);
// }

int reverse(int num,int rev)
{
    if(num==0)
    {
        return rev;
    }

    return reverse(num/10,num%10+rev*10);
}


void main()
{
    printf("%d ",reverse(6354,0));
}