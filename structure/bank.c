#include<stdio.h>
#define SIZE 2
#include<string.h>

struct customer{
    int id;
    char name[30];
    int bal;
    int flag;
}c[SIZE];

void create()
{
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter customer id :");
        scanf("%d",&c[i].id);
        fflush(stdin);
        printf("Enter customer Name :");
        gets(c[i].name);
        c[i].bal = 2000;
    }   
}

void display()
{
    printf("Id\tName\tBal\n");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d\t%s\t%d\n",c[i].id,c[i].name,c[i].bal);
    }
}

void deposit(int id)
{
    int flag=0; 
    for(int i=0;i<SIZE;i++)
    {
        if(c[i].id == id)
        {
            int amount;
            printf("Enter Amount to deposit :");
            scanf("%d",&amount);
            c[i].bal += amount;
            printf("Deposited successfully...");
            flag=0;
            break;
        }
        else{
            flag=1;
        }

    }
    if(flag == 1)
    {
        printf("Customer Not Found..");
    }
}

void withdraw(int id)
{
    int temp=0;
    for(int i=0;i<SIZE;i++)
    {
        if(c[i].id == id)
        {
            int amount;
            printf("Enter withdraw amount :");
            scanf("%d",&amount);
            if(amount<c[i].bal)
            {
                printf("Withdraw successfully...");
                c[i].bal -= amount;
            }
            else{
                printf("Insufficient balance...");
            }

            temp=0;
            break;
        }
        else{
            temp=1;
        }
    }

    if(temp == 1)
    {
        printf("Customer not found!!..");
    }
}

void main()
{
    int choice,id;
    while(choice!=5)
    {
        printf("\n1 - CREATE");
        printf("\n2 - DISPLAY");
        printf("\n3 - DEPOSIT");
        printf("\n4 - WITHDRAW");
        printf("\nEnter your choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: create();
                break;
            case 2: display();
                break;

            case 3: printf("Enter customer Id :");
                    scanf("%d",&id);
                    deposit(id);
                    break;

            case 4: printf("Enter customer id :");
                    scanf("%d",&id);
                    withdraw(id);
                    break;
        }
    }


}