/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define ELE 2

int main(void)
{
    //定数を定義
    double mat[ELE][ELE];
    double det;
    double a =0;
    
    int i = 0;
    int j = 0;
    
    printf("行列の値を入力\n");
    
    //初期化
    for(int i = 0; i < ELE; i++){
        for(int j = 0; j < ELE; j++){
            printf("行列[%d][%d]:", i+1,j+1);
            scanf("%lf", &mat[i][j]);
        }
    }
    
    //逆行列を求める式
    det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    if(det == 0){
        printf("impossible\n");
    }else{
        a = mat[0][0];
        mat[0][0] = mat[1][1] / det;
        mat[1][1] = a / det;
        mat[0][1] = mat[0][1] / det*(-1);
        mat[1][0] = mat[1][0] / det*(-1);
        
        printf("逆行列は\n");
        for(int i = 0; i < ELE; i++){
            for(int j = 0; j < ELE; j++){
                printf("%lf", mat[i][j]);
                printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}


