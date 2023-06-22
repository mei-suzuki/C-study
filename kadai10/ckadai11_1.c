/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    //変数を定義
    int a = 0;
    int b = 0;
    
    //入力について
    printf("入力は\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    
    swap(&a, &b);
    
    //出力について
    printf("出力は\n");
    printf("a=%d\nb=%d", a,b);
    
    return 0;
}

void swap(int *x, int *y){
    
    int temp = 0;
    
    //xとyの入れ替え
    temp = *x;
    *x = *y;
    *y = temp;
    
}