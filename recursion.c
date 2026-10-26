#include<stdio.h>


// // void demo(int n)
// // {
// //     if(n==0)
// //     {
// //         return;
// //     }
// //     printf("%d ",n); // 10 9 8 7 6 5 4 3 2 1

// //     demo(n-1);
// // }


// // void main()
// // {
// //     demo(10);
// }


// int sumOfDigit(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }

//     return n%10+sumOfDigit(n/10); // 6 + sumOfDigit(1786/10)    
//                                  // 6 + 8 +  sumOfDigit(178/10)
//                                 // 6 + 8 + 7 + sumOfDigit(17/10)
//                                 // 6 + 8 + 7 + 1 + sumOfDigit(1/10)
//                                 // 6 + 8 + 7 + 1 + 0
// }

// void main()
// {
//     int ans = sumOfDigit(1786);
//     printf("%d",ans);
// }


int fact(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n*fact(n-1);
}

void main()
{
    int ans = fact(5);
    printf("%d",ans);
}