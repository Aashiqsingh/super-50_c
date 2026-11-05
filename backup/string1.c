#include<stdio.h>
#include<string.h>

void main()
{
    char str[20]; // {'c','h','e','n','s','y',' ','\0'}

    printf("Enter Name :\n");
    // scanf("%s",str);
    gets(str);


    // printf("Length of str = %d",strlen(str));
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    printf("Length of str = %d",len);

    // printf("Name = %s",str);
}