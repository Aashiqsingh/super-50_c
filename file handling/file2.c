#include<stdio.h>

void main()
{
    FILE *f;
    char name;

    f = fopen("demo.txt","r");

    if(f == NULL)
    {
        printf("FIle not exist...");
    }
    else{
        printf("File exist..");

        name = fgetc(f);
        printf("Name = %c",name);
        

        fclose(f);
    }

}