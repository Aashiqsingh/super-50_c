#include<stdio.h>

void science(int per,char name[])
{
    printf("%s ur admission confirm in science with per %d",name,per);
}

void commerce(int per,char name[])
{
    printf("%s ur admission confirm in commerce with per %d",name,per);
}

void arts(int per,char name[])
{
    printf("%s ur admission confirm in arts with per %d",name,per);
}

void diploma(int per,char name[])
{
    printf("%s ur admission confirm in diploma with per %d",name,per);
}


void main()
{

    int percentage = 42;
    char name[20] = "chensy patel";


    if(percentage>90)
    {
        science(percentage,name);
    }
    else if(percentage>80)
    {
        commerce(percentage,name);
    }
    else if(percentage > 70)
    {
        diploma(percentage,name);
    }
    else if(percentage>50)
    {
        arts(percentage,name);
    }
    else{
        printf("ur percentage is less than 50");
    }

}