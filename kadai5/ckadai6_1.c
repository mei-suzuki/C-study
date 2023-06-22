/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

#define ELE 10

int main(void)
{
    //定数,配列を定義
    double a[ELE];
    double sum = 0;
    double ave = 0;
    double dif = 0;
    double dis = 0;
    double sta = 0;
    
    int i = 0;
    
    printf("任意の10個の実数を入力\n");
    
    //初期化
    for(i=0; i<ELE; i++){
        a[i] = 0;
        scanf("%lf", &a[i]);
    }
    
    //平均を求める式
    for(int i=0; i<ELE; i++){
        sum = sum + a[i];
        ave = sum / ELE;
    }
    
    //分散を求める式
    for(int i=0; i<ELE; i++){
        dif =  dif + (a[i] - ave)*(a[i] - ave);
        dis = dif / ELE;
    }
    
    //標準偏差を求める式
    for(int i=0; i<ELE; i++){
        sta = sqrt(dis);
    }
    
    //結果の表示
    printf("平均は%lf\n", ave);
    printf("分散は%lf\n", dis);
    printf("標準偏差は%lf", sta);

    return 0;
}

