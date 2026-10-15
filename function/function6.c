#include<stdio.h>

void singapore(char fname[],int amount)
{
    printf("\n%s ur tour is confirmed in singapore with budget %d",fname,amount);
}

void newyork(char fname[],int amount)
{
    printf("\n%s ur tour is confirmed in newyork with budget %d",fname,amount);
}

void paris(char fname[],int amount)
{
    printf("\n%s ur tour is confirmed in paris with budget %d",fname,amount);
}

void dubai(char fname[],int amount)
{
    printf("\n%s ur tour is confirmed in dubai with budget %d",fname,amount);
}


void travel(char name[])
{
    int budget;
    printf("Enter budget: ");
    scanf("%d",&budget); // 5000

    if(budget > 4000)
    {
        singapore(name,budget);
    }
    if(budget > 3000)
    {
        newyork(name,budget);
    }
    if(budget > 2000)
    {
        paris(name,budget);
    }
    if(budget > 1000)
    {
        dubai(name,budget);
    }
    else{
        printf("u need to earn first money.");
    }
}


void main()
{
    char firstName[] = "chensy"; 
    travel(firstName);
}