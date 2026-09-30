// update
#include<stdio.h>
void main()
{
    int a[5];

    printf("Enter 5 elements\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    int n;
    printf("Search element and unpdate :");
    scanf("%d",&n);


    for(int i=0;i<5;i++)
    {
        if(a[i] == n)
        {
            printf("Element updated value :");
            scanf("%d",&a[i]);
            printf("Updated successfully\n");
        }
    }

    printf("Updated elements are\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

}