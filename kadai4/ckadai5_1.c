/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    //定数を定義
    char c;
    
    //任意のアルファベットを入力
    printf("小文字のアルファベット1文字を入力:");
    scanf("%c", &c);
    
    //変換作業
    c = c - ('a' - 'A');
    
    //変換後の表示
    printf("大文字に変換すると");
    printf("%c", c);

    return 0;
}

