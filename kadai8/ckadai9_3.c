/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    //定数を定義
    int i,j,k;
    int number[11];
    
    //整数を入力
    printf("任意の10個の整数を入力\n");
    for(i=0;i<10;i++){
        scanf("%d", &number[i]);
    }
    
    //小さい順にソートする
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(number[i]>number[j]){
                k = number[i];
                number[i] = number[j];
                number[j] = k;
            }
        }
    }
    
    //ソートしたものを表示
    printf("小さい順に表示:");
    for(i=0;i<10;i++){
        printf("%d", number[i]);
        printf(" ");
    }

    return 0;
}

