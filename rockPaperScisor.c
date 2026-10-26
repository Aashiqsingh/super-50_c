#include<stdio.h>
#include<time.h>
#include<stdlib.h>

char computer()
{
    int num;
    srand(time(0));
    num = rand()%3+1;
    

    if(num == 1)
    {
        printf("Computer chose Rock\n");
        return 'r';
    }
    else if(num == 2)
    {
        printf("Computer chose Paper\n");
        return 'p';
    }
    else if(num == 3)
    {
        printf("Computer chose Scissors\n");
        return 's';
    }
}

char user()
{
    int num;
    printf("1 - Rock\n2 - Paper\n3 - Scissors\n");
    scanf("%d",&num);

    if(num == 1)
    {
        printf("User chose Rock\n");
        return 'r';
    }
    else if(num == 2)
    {
        printf("User chose Paper\n");
        return 'p';
    }
    else if(num == 3)
    {
        printf("User chose Scissors\n");
        return 's';
    }
}


void main()
{
    char userAns,compAns;
    userAns = user();
    compAns = computer();
    printf("Computer chose %c\n",compAns);
    printf("User chose %c\n",userAns);

    if(compAns == userAns)
    {
        printf("It's a tie\n");
    }
    else if(compAns == "r" && userAns == "p")
    {
        printf("User wins\n");
    }
    else if(compAns == "p" && userAns == "s")
    {
        printf("User wins\n");
        
    }
    else if(compAns == "s" && userAns == "r")
    {
        printf("User wins\n");
    }
    else{
        printf("Computer wins\n");
    }
}