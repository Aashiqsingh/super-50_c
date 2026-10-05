#include<stdio.h>
void main()
{
    int a[3][3];

    printf("Enter elements :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int sum=0;
    printf("Elements entered are :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("Sum = %d\n",sum);
}