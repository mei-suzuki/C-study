/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap_array(int *x, int *y);

int main(void)
{
    //変数を定義
    int a[5];
    int b[5];
    
    //入力について
    printf("入力は\n");
    printf("a=");
    scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);
    printf("b=");
    scanf("%d %d %d %d %d", &b[0],&b[1],&b[2],&b[3],&b[4]);
    
    swap_array(a, b);
    
    //出力について
    printf("出力は\n");
    printf("a=%d %d %d %d %d\n", a[0],a[1],a[2],a[3],a[4]);
    printf("b=%d %d %d %d %d", b[0],b[1],b[2],b[3],b[4]);
    
    return 0;
}

void swap_array(int *x, int *y){
    
    int temp[5];
    
    //xとyの入れ替え
    for(int i=0;i<5;i++){
        
      temp[i] = *(x+i);
      *(x+i) = *(y+i);
      *(y+i) = temp[i];
      
    }
    
}