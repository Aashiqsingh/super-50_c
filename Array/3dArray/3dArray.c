#include<stdio.h>
void main()
{
    // int a[][2][2];
    // first [2] --> number of matrix
    // second [2] --> number of rows
    // third [2] --> number of columns
    int a[2][3][2] = {
        {
            {1,2},
            {3,4},
            {5,6}
        }
        ,{
            {7,8},
            {9,0},
            {2,4}
        }
    };


    for(int i=0;i<2;i++) // no. of block
    {
        for(int j=0;j<3;j++) // row
        {
            for(int k=0;k<2;k++) // column
            {
                printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }





    // a[0][0][0] = 1
    // a[0][0][1] = 2
    // a[0][1][0] = 3
    // a[0][1][1] = 4
    // a[0][2][0] = 5
    // a[0][2][1] = 6
    // a[1][0][0] = 7
    // a[1][0][1] = 8
    // a[1][1][0] = 9
    // a[1][1][1] = 0
    // a[1][2][0] = 2
    // a[1][2][1] = 4

}
