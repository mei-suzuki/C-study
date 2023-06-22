/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

double integral(int n);

int main(void)
{
    //変数定義
    int n = 0;
    int i = 0;
    double result = 0.0;
    FILE *fp;
    
    fp = fopen("data.dat", "w");
    
    fprintf(fp,"n\ty\n");
    
    for(i=0;i<100;i++){
        
        //呼び出し
        result = integral(i);
        fprintf(fp,"%d\t%lf\n", i+1,result);
        
    }
    
    fclose(fp);

    return 0;
}

double integral(int n){
    //変数定義
    double y = 0.0;
    double h = 0.0;
    double x1 = 0.0;
    double x2 = 0.0;
    int j = 0;
    
    h = 10.0/(double)n;
    
    while(j<n){
        //積分式
        x1 = h*(double)j;
        x2 = h*(double)(j+1);
        y += (x1*x1 + x2*x2)*h/2.0;
        j++;
    
    }
    
    return y;
}

