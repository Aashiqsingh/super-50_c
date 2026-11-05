#include<stdio.h>
void main()
{
    char str[20];

    printf("Enter string :");
    gets(str);

    int count=0;

    // for(int i=0;i<strlen(str))
    for(int i=0;i<str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }

    printf("Space count = %d",count);
}