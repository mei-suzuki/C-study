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
    char *pc;
    char c = 0;
    int *pi;
    int i = 0;
    
    //初期化
    pc = &c;
    pi = &i;
    
    //pcについて
    printf("pcについて表示\n");
    
    for(int k=0;k<6;k++){
      if(k == 0){
          printf("pc=%p\n", pc);
          pc++;
      }else{
          printf("pc+%d=%p\n", k, pc);
          pc++;
      }
    }
    
    //piについて
    printf("piについて表示\n");
    
    for(int k=0;k<6;k++){
      if(k == 0){
          printf("pi=%p\n", pi);
          pi--;
      }else{
          printf("pi-%d=%p\n", k, pi);
          pi--;
      }
    }
    
    return 0;
}
