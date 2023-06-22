/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    //定数を定義
    int deg = 0; //度数法での角度
    double rad = 0;
    double s = 0; 
    double c = 0;
    
    //最初の表示
    printf("angle[deg]\tsin\tcos\n");
    
    //繰り返しの計算
    for(deg=0;deg<=360;deg+=10){

        rad = (deg*3.14159265359)/180;　//弧度法の式

        s = sin(rad);
        c = cos(rad);
        
        //結果の出力
        printf("%d\t%lf\t%lf\n", deg,s,c);
    }
    
    return 0;
}
