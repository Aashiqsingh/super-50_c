#include<stdio.h>
void main()
{
    int a[2][2][2];

    printf("enter elements of array\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }


    for(int i=0;i<2;i++)
    {
        int sum=0;
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                printf("%d ",a[i][j][k]);
                sum+=a[i][j][k];
            }
            printf("\n");
        }
        printf(" =  %d\n",sum);

    }

    

}