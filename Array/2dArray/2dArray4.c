#include<stdio.h>
#define ROW 3 // global variable
#define COL 2 // global variable
void main()
{
    int a[ROW][COL];


    printf("Enter elements :\n");
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Elements entered are :\n");
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}