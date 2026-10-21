#include<stdio.h>


void main()
{
    char name[20];

    printf("Enter your name\n");
    gets(name); // yashvi patel

    int i=0;
    //   
    while(name[i]!='\0')
    {
        i++;
    }
    printf("Length of name = %d",i);
}

// a = zeel maisuriya