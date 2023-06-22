/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define V 5.0
#define R 10.0
#define C 10.0
#define dt 0.001

int main(void)
{
    //変数定義
    double i = 0.0;
    double v = 0.0;
    double t = 0.0;
    FILE *fp;
    
    fp = fopen("data.dat","w");
    
    fprintf(fp,"t\ti\tv\n");
    
    while(t<(1.0+dt)){
        //電子電圧の時間変化式
        i = (V-v)/(R*10*10*10);
        v = v+(1/C*10*10*10*10*10*10)*i*dt;
        
        fprintf(fp,"%.3f\t%lf\t%lf\n",t,i,v);
        
        t += dt;
    }
    
    fclose(fp);
    
    return 0;
}





