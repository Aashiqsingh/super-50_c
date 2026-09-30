#include<stdio.h>
void main()
{
    int a[5],temp;

    printf("Enter 5 elements :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Before sorting :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }


    // 18 12 76 34 45
    // 12 18 76 34 45
    // 12 18 34 76 45
    // 12 18 34 45 76

    

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            //  18 > 12
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nAfter sorting :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}


// temp = a;
// a = b;
// b = temp;