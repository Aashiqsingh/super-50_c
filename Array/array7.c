#include<stdio.h>
void main()
{
    int a[5];

    printf("Enter 5 elements\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
                                             //0   1  2  3 
    int d;                                  // 56 23 45 65
    printf("Enter element to be Removed"); // 23
    scanf("%d",&d);
    int j;
    for(int i=0;i<5;i++)
    {
        if(a[i] == d)
        {
            for(int j=i;j<5;j++)
            {
                a[j] = a[j+1];
            }
        }
    }

    

    printf("The elements of the array after deletion are\n");
    for(int i=0;i<4;i++)
    {
        printf("%d\n",a[i]);
    }

}