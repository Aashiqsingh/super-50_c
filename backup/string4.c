#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20] = "palak";
    char str2[20] = "palaka";

    // if(strcmp(str1,str2)==0)
    // {
    //     printf("Both are same ..");
    // }
    // else{
    //     printf("Not same");
    // }
    int temp = 0;
    if(strlen(str1) == strlen(str2))
    {
        for(int i=0;i<strlen(str1);i++)
        {
            if(str1[i] == str2[i])
            {
                temp = 1;
            }
            else{
                printf("Not same..");
                temp=0;
                break;
            }
        }
    }
    else{
        printf("Not same");
    }

    if(temp == 1)
    {
        printf("Both are same...");
    }
}