/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // 変数を定義
    int a,b,c,d,e;
    
    //キーボード入力
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    printf("d=");
    scanf("%d", &d);
    printf("e=");
    scanf("%d", &e);

    //fの計算結果
    int f = ((a+b)-(c/d))*e;
    printf("%d \n", f);

    return 0;
}


