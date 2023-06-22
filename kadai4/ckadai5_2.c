/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int i,j;
    int a,b,c,d;
    
    //aを求める式
    for(i = 100; i <= 1000; i++){
        a = a + (2*i + 5);
    }
    
    
    //bを求める式
    for (i = 1; i <= 20; i++)
    {
        for (j = 1; j <= 50; j++)
        {
            b = b + (2*i + 3*j);
        }
    }
    
    //a,bの結果表示
    printf("(a,b) = ");
    printf("(%d, %d)", a,b);
    
    return 0;
}


