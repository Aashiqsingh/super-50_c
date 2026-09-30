#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{

     char otp[6];

    srand(time(0));
    for(int i=0;i<=5;i++)
    {
        if(i<2)
        {
            otp[i] = rand()%26 + 97;
        }
        else if(i<4){
            otp[i] = rand()%26 + 65;
        }
        else{
            otp[i] = rand()%10 + 48;
        }
    }

    for(int i=0;i<6;i++)
    {
        printf("%c",otp[i]);
    }





    // srand(time(0));
    // int otp = rand()%9000+1000;

    // printf("otp = %d",otp);

    // char otp[6];

    // srand(time(0));
    // for(int i=0;i<=5;i++)
    // {
    //     otp[i] = rand()%26 + 97;
    // }

    // for(int i=0;i<6;i++)
    // {
    //     printf("%c",otp[i]);
    // }
}