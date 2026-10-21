#include<stdio.h>

int f(int n)
{
    if(n<=0)
    {
        return 0;
    }

    return n%10 + f(n/10);
}

void main()
{
    int ans = f(13);
    printf("Sum of digits = %d",ans);

}