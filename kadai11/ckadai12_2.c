/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct ex{
    int n;
    double m;
}ex_t;

void swap_st(ex_t*x, ex_t*y);

int main(void)
{
    //変数定義
    ex_t a,b;
    ex_t *x = &a;
    ex_t *y = &b;
    
    int a1,b1;
    double a2,b2;
    
    //入力について
    printf("2つの数値を入力：\n");
    printf("a=\n{");
    scanf("%d", &a1);
    scanf("%lf", &a2);
    printf("},\nb=\n{");
    scanf("%d", &b1);
    scanf("%lf", &b2);
    printf("}\n");
    
    x->n = a1;
    x->m = a2;
    y->n = b1;
    y->m = b2;
    
    //関数呼び出し
    swap_st(&a, &b);
    
    //出力　
    printf("出力：\n");
    printf("a=%d\t%lf\n", x->n,x->m);
    printf("b=%d\t%lf\n", y->n,y->m);

    return 0;
}

//入れ替え関数の定義
void swap_st(ex_t *x, ex_t *y){
    
    ex_t temp;
    
    //xとyの入れ替え
    temp = *x;
    *x = *y;
    *y = temp;
    
}


