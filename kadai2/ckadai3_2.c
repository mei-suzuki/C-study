/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    //係数を定義
    float a,b,c;
    float discriminant;
    float answer1, answer2, answer3;
    
    //係数の入力
    printf("二次方程式の係数を入力\n");
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("c=");
    scanf("%f", &c);
    

    //判別式を定義    
    discriminant = b*b-4*a*c;
    
    //判別式で場合分け
    if(discriminant > 0){
      //答えを求める式
      answer1 = (-b+sqrt(discriminant))/(2*a);
      answer2 = (-b-sqrt(discriminant))/(2*a);
    
      //答えを表示
      printf("二次方程式の実数解:x=%f,%f", answer1,answer2);
    
    }else if(discriminant == 0){
        
      //解を一つ求める
      answer3 = -b/(2*a);
      
      //答えを表示
      printf("二次方程式の実数解:x=%f", answer3);
        
    }else{
        
      //判別式負の時の表示
      printf("実数解なし");
        
    }
    
    return 0;
}


