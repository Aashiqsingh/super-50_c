#include<stdio.h>


// with return without argument
int add()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    return a+b;
} 


void main()
{
    // int ans = add();
    // printf("Addition = %d",ans);



    printf("Addition = %d",add());
}