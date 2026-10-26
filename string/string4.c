#include<stdio.h>

void main()
{
    char fname[10] = "yashvi";
    char lname[10] = "";

    // strcpy(lname,fname);

    // printf("First name = %s\n",lname);
   
    int len=0;
    while(fname[len]!='\0')
    {
        len++;
    }

    printf("Length of first name = %d\n",len);

    for(int i=0;i<len;i++)
    {
        lname[i] = fname[i];
        // printf("%c",lname[i]);
    }

    printf("First name = %s\n",lname);

}