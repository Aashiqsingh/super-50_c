#include<stdio.h>

void main()
{
    int arr[10] = {78,56,45,34,23,89,11,12,13,90};

    int *ptr;
    int evenSum=0,oddSum=0;

    ptr = arr;

    for(int i=0;i<10;i++)
    {
        if(*(ptr+i)%2==0)
        {
            evenSum+=*(ptr+i);
        }
        else{
            oddSum+=*(ptr+i);
        }

    }

    printf("Even sum = %d",evenSum);
    printf("\nOdd sum = %d",oddSum);


}