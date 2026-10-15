#include<stdio.h>

int checkBal()
{
    int avlbal = 1000;

    return avlbal;
}

void deposit(int amount)
{
    int bal = checkBal();
    printf("Deposited successfully...");
    bal += amount;
    printf("\nAfter deposited ur bal will be = %d",bal); 
}

void withdraw()
{
    printf("Enter amount to withdraw: ");
    int amt;
    scanf("%d",&amt);

    int bal = checkBal();
    if(amt <= bal)
    {
        printf("Withdrawed successfully...");
        bal -= amt;
        printf("\nAfter withdrawed ur bal will be = %d",bal);
    }
    else{
        printf("Insufficient balance");
    }
}


void main()
{
    int bal;
    printf("Welcome to BOB ATM");
    printf("\n1 - Check Bal");
    printf("\n2 - Deposit");
    printf("\n3 - Withdraw");
    printf("\nEnter your choice: ");
    int ch;
    scanf("%d",&ch);

    

    switch(ch)
    {
        case 1: bal = checkBal();
                printf("Current Balance = %d",bal);
                break;

        case 2: printf("Enter amount to deposit: ");
                int amt;
                scanf("%d",&amt);
                deposit(amt);
                break;
        case 3: withdraw();
                break;
    }
}