#include<stdio.h>

void findMax(int size,int a[])
{
    int max = a[0];

    for(int i=1;i<size;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }

    printf("Max element is = %d",max);
}

void main()
{
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);

    int arr[n];
    printf("Enter all elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    findMax(n,arr);
}