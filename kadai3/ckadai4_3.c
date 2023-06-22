/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //定数を定義
    int i = 0;
    int x = 0;
    int n = 0;
    
    //任意のnを入力
    printf("n=");
    scanf("%d", &n);
    
    //条件式
    for(i = 1; i <= n; i++){
        x += i;
    }
    
    //結果を表示
    printf("1~nまでの和は");
    printf("%d", x);

    return 0;
}

