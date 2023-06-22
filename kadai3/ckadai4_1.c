/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //定数を定義
    int a;
    
    //aの値の入力
    printf("a=");
    scanf("%d",&a);
    
    //条件分岐
    if(a%6==0){
        printf("aは6の倍数");
    }else if(a%2==0){
        printf("aは2の倍数");
    }else if(a%3==0){
        printf("aは3の倍数");
    }else{
        printf("aはその他の整数");
    }

    return 0;
}

