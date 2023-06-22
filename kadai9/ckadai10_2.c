/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    //変数を定義
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    int s = 0;
    
    p = &a[0];
    *p = a[0];
    
    //繰り返し処理
    for(int i=0;i<10;i++){
        s += *(p+i);
    }
    
    printf("和は%d\n", s);

    return 0;
}
