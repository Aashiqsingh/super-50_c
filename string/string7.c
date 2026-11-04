#include<stdio.h>
#include<string.h>
void main()
{
    char fname[20] = "ABC";
    char sname[20] = "ABC";

    int flag = 0;
    if(strlen(fname) == strlen(sname))
    {
        for(int i=0;i<strlen(fname);i++)
        {
            if(fname[i] != sname[i])
            {
                flag = 1;
                break;
            }
            else{
                flag=0;
            }
        }
    }
    else{
        printf("Not equal..");
        flag = 1;
    }
    


    if(flag == 0)
    {
        printf("Both are equal..");
    }
    else{
        printf("Not equal");
    }
    


}