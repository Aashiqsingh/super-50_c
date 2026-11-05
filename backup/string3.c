#include<stdio.h>
#include<string.h>

void main()
{
    // str copy;

    char str[20] = "palak";
    char copy[20];

    // strcpy(copy,str);
    // printf("Copy = %s",copy);
    int i;
    for(i=0;i<str[i]!='\0';i++)
    {
        copy[i] = str[i];
    }
    copy[i] = '\0';
    printf("Copy = %s",copy);
}