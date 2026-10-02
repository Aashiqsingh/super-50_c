#include<stdio.h>
#define SIZE 5
void main()
{
    int a[SIZE];

    printf("Enter elements :\n");
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements entered are :\n");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",a[i]);
    }


    // second largest element in array             a = 13 78 56 43 22
                                            //          0  1 2   3  4
    int max = a[0];
    int secondLargest=0;

    for(int i=1;i<SIZE;i++)
    {
        if(a[i]>max)
        {
            secondLargest=max; // secondLargest = 13
            max=a[i]; // max = 78
        }
        else if(a[i]>secondLargest)
        {
            secondLargest=a[i]; // secondLargest = 56
        }
    }

    printf("\n second largest = %d",secondLargest);


}