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
    int x,y;
    
    //任意の2整数を入力
    printf("任意の1以上の2整数を入力\n");
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);
    
    //条件分岐
    if(x >= y){
    
      //式を定義
      int r = x%y;
      int z = x*y;
      
      //ユークリッドの互除法
      while(r!=0){
        x=y;
        y=r;
        r = x%y;
      }
      
      //最小公倍数を求める式
      int lcm = z/y;
      
      //最大公約数と最小公倍数の表示
      printf("最大公約数は");
      printf("%d\n", y);
      
      printf("最小公倍数は");
      printf("%d\n", lcm);
      
    }else{
        
      //式を定義    
      int r = y%x;
      int z = x*y;
      
      //ユークリッドの互除法
      while(r!=0){
        y=x;
        x=r;
        r = y%x;
      }
      
      //最小公倍数を求める式
      int lcm = z/x;
      
      //最大公約数と最小公倍数の表示
      printf("最大公約数は");
      printf("%d\n", x);
      
      printf("最小公倍数は");
      printf("%d\n", lcm);
    }

    return 0;
    
}



