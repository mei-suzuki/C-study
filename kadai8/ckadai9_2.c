/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

//プロトタイプ宣言
double Area(int n, double a);

int main(void)
{
    //定数を定義
    int n = 0;
    double a = 0;
    double result = 0;
    
    //整数nと実数aを入力
    printf("正n角形:n=");
    scanf("%d", &n);
    printf("一辺の長さ:a=");
    scanf("%lf", &a);
    
    //条件分岐
    if(n<=2){
        printf("impossible");
    }else{
        result = Area(n, a);
        printf("面積は%lf", result);
    }

    return 0;
}

double Area(int n, double a){
    
    //定数を定義
    double s = 0;
    
    //面積を求める式
    s = n*a*a/(4*tan(3.14159265398979/n));
    
    return s;
    
}
