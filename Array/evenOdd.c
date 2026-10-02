#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    int evenSum=0,oddSum=0;
    printf("Even Elements :\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evenSum+=a[i];
        }
        else{
            oddSum+=a[i];
        }
    }

    printf("Sum of Even Elements = %d\n",evenSum);
    printf("Sum of Odd Elements = %d\n",oddSum);
}