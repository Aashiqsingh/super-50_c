#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

    while(i <= 4)
    {
        sum += i * i;
        i++;
    }

    printf("%d", sum);

    return 0;
}