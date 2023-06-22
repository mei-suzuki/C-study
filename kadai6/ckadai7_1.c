/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

#define ELE 3

//プロトタイプ宣言
double SD(double x, double y, double z);

//メインの関数
int main(void)
{
    //定数を定義
    double x = 0;
    double y = 0;
    double z = 0;
    double result = 0;
    
    //三つの実数を入力
    printf("三つの実数x,y,zを入力:\n");
    printf("x=");
    scanf("%lf", &x);
    printf("y=");
    scanf("%lf", &y);
    printf("z=");
    scanf("%lf", &z);
    
    //関数の呼び出し
    result = SD(x, y, z);
    
    //結果の出力
    printf("標準偏差は%lf", result);
    
    return 0;
}

//標準偏差を求めるプログラム関数
double SD(double x, double y, double z){
    //定数を定義
    double ave = 0;
    double dis = 0;
    double s = 0;
    
    //平均を求める式
    ave = (x+y+z)/ELE;
    //分散を求める式
    dis = ((x-ave)*(x-ave)+(y-ave)*(y-ave)+(z-ave)*(z-ave))/ELE;
    //標準偏差を求める式
    s = sqrt(dis);
    
    return s;
}
