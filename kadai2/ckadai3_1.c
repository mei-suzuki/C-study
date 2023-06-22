/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //変数を定義
    int a,b;
    
    //数を入力
    printf("学籍番号:");
    scanf("%4d%4d", &a,&b);
    
    //4桁ずつ表示
    printf("上4桁は");
    printf("%4d\n", a);
    printf("下4桁は");
    printf("%4d\n", b);

    return 0;
}


