#include<stdio.h>
void main()
{
    int a[2][3][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("Enter [%d][%d][%d] element :",i+1,j+1,k+1);
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    printf("Print the array :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}