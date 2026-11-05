#include<stdio.h>

int fact(int num)
{
    if(num == 0){
        return 1;
    }

    return num*fact(num-1);

}

void main()
{
    printf("%d ",fact(5));
}