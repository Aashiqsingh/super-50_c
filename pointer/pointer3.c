#include<stdio.h>

void main()
{
    int a[5] = {5,6,17,7,8};

    // *p = a[0] - address
    // printf("\nAddres of a = %u",&a[0]);
    // printf("\nAddres of a = %u",&a[1]);
    // printf("\nAddres of a = %u",&a[2]);
    // printf("\nAddres of a = %u",&a[3]);
    // printf("\nAddres of a = %u",&a[4]);


    int *p = a;

    // printf("\nAddres of a = %u",p);
    // printf("\naddress of a[1] = %u",p+1);
    // printf("\naddress of a[1] = %u",p+2);
    // printf("\naddress of a[1] = %u",p+3);
    // printf("\naddress of a[1] = %u",p+4);


    // printf("value of a[0] = %d",*(p+2));

    for(int i=0;i<5;i++)
    {
        printf("%u\n",p+i);
    }


}