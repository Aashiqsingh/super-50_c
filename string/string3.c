#include<stdio.h>
#include<string.h>

void main()
{
    char ch[20];
    char str[20];

    printf("Enter a string\n");
    gets(ch);
    printf("Enter 2nd string\n");
    gets(str);

    printf("String 1 = %s\n",ch);
    printf("String 2 = %s\n",str);

    strcat(ch," ");
    strcat(ch,str);
    

    printf("String 1 = %s\n",ch);
    printf("String 2 = %s\n",str);
}