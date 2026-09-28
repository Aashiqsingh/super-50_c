#include<stdio.h>



void main()
{
    int arr[5];

    printf("Enter 5 elements :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

// 13 16 76 34 45

    printf("Printing array elements :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    int max = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    printf("\nMax = %d",max);
}