/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    //定数を定義
    int deg = 0; 
    double rad = 0;
    double s = 0; 
    double c = 0;
    
    FILE*fp;
    fp = fopen("data.dat", "w");
    
    //最初の表示
    fprintf(fp, "angle[deg]\tsin\tcos\n");
    
    //繰り返しの計算
    for(deg=0;deg<=360;deg+=10){

        rad = (deg*3.14159265359)/180;
        
        s = sin(rad);
        c = cos(rad);
        
        fprintf(fp, "%d\t%lf\t%lf\n", deg,s,c);
    }
    
    fclose(fp);
    

    return 0;
}



