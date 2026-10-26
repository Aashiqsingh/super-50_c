#include<stdio.h>
#include<string.h>


void main()
{
    char ch[20] = "nayna";

    // strrev(ch);
    printf("String = %s\n",ch);

    int len=0;
    while(ch[len]!='\0')
    {
        len++;
    }
    printf("Length = %d\n",len);

    for(int i=len-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }

}

// naman
// nayan
// mom

// find string pallindrome