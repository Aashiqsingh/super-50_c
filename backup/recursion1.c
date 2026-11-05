#include<stdio.h>
// #define a 10
// #define chensy printf 

void demo(int num){
    if(num == 0) return;
    printf("%d ",num);

    demo(num-1);
   
}

void main()
{
    demo(10);
  
}
