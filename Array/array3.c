#include<stdio.h>
void main()
{
    // int arr[5] = {10,20,30,40,50};

    // // printf("%d\n",arr[0]);

    // for(int i=0;i<5;i++)
    // {
    //     printf("%d\n",arr[i]);
    // }



    int arr[5];

    for(int i=0;i<5;i++)
    {
        printf("Enter [%d] element :",i+1);
        scanf("%d",&arr[i]);
    }

    // for(int i=0;i<5;i++)
    // {
    //     printf("%d\n",arr[i]);
    // }

    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\t",arr[i]);
        }
    }
}