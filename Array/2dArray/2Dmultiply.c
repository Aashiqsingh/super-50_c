#include<stdio.h>
void main()
{
    int a[3][3],b[3][3];

    printf("Enter elements of 1st array :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of 2nd array :\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("1st array :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("2nd array :\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    int c[3][3];
    for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<3;j++)
        {
            c[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                c[i][j] = c[i][j] +  (a[i][k] * b[k][j]); 
        //    1st move     0       +    1     *   3
        //    2nd move     3       +    2     *   2
        //    3rd move     7       +    3     *   5
        //    4th move     0       +    1     *   2
        //    5th move     2       +    2     *   3
        //    6th move     8       +    3     *   6
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

// a[row][col]