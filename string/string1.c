#include<stdio.h>


void main()
{
    char ch[20];
    int ans;

    printf("Enter a string\n");
    // scanf("%s",ch);
    gets(ch);
    ans = strlen(ch);

    // printf("Name = %s",ch);
    puts(ch);
    printf("\nLength = %d",ans);




    // printf("Enter a string\n");
    // for(int i=0;i<6;i++)
    // {
    //     scanf("%c",&ch[i]);
    // }

    // printf("String entered is\n");
    // for(int i=0;i<6;i++)
    // {
    //     printf("%c",ch[i]);
    // }
}