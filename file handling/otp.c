#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void generateOtp(){
    srand(time(0));
    int otp = rand()% 9000 + 1000;

    // printf("OTP - %d",otp);
    FILE *fp;
    fp = fopen("otp.txt","w");
    if(fp == NULL)
    {
        printf("Error in createing file..");
    }
    else{
        printf("FILE CREATED SUCCESSFULLY..");

        fprintf(fp,"%d",otp);
        fclose(fp);
    }
}

void readOtp()
{
    FILE *f;
    f = fopen("otp.txt","r");
    if(f == NULL)
    {
        printf("File not exists..");
    }
    else{
        int ans;
        fscanf(f,"%d",&ans);
        printf("Otp = %d",ans);
        fclose(f);
    }
}

void main()
{
    int choice;

    printf("\n1 - Generate OTP :");
    printf("\n2 - Read OTP");
    printf("\nEnter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: generateOtp();
                break;
        case 2: readOtp();
                break;
    }
}