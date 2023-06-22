/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    //定数を定義
    int i,j,k;
    double item = 0;
    double a[2][2],b[2][2],c[2][2],d[2][2];
    
    //行列Aを入力
    printf("行列Aを入力\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("A[%d][%d]:", i+1, j+1);
            scanf("%lf", &a[i][j]);
        }
    }
    
    //行列Bを入力
    printf("行列Bを入力\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("B[%d][%d]:", i+1, j+1);
            scanf("%lf", &b[i][j]);
        }
    }
    
    //C=A+Bの計算
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    //D=A*Bの計算
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            d[i][j] = 0;
            for(k=0;k<2;k++){
                d[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    
    //結果を表示
    printf("行列Cは\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%lf", c[i][j]);
            printf(" ");
        }
        printf("\n");
    }
        
    printf("行列Dは\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%lf", d[i][j]);
            printf(" ");
        }
        printf("\n");
    }    

    return 0;
}


