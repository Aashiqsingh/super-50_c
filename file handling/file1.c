#include<stdio.h>
#include<string.h>

void main()
{
    FILE *fp;
    char name;

    fp = fopen("demo.txt","a");

    // printf("Address of fp = %u",fp);

    if(fp == NULL)
    {
        printf("File not created...");
    }
    else{
        printf("\nFile created successfully...");

        printf("\nEnter a character :");
        scanf("%c",&name);

        fputc(name,fp); // it is used for write

        fclose(fp);
    }
}

// fopen() , fclose()
// mode : w - write , r - read , a - append

// fputc -> write
// fgtec -> read