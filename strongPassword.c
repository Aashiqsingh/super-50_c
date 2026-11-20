#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    // int otp;

    // srand(time(0));
    // otp = rand() % 9000 + 1000;
    // printf("otp = %d",otp);

    char otp[5];

    // srand(time(0));
    // otp = rand()%26 + 65;
    // printf("%c",otp);
        srand(time(0));

    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            otp[i] = rand()%26+65;
        
        }
        else{
            otp[i] = rand()%26+97;
        }
    }
    printf("%s",otp);

    // for(int i=0;i<5;i++)
    // {
    //     printf("%c",otp[i]);
    // }
}