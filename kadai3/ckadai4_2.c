/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //定数を定義
    int a = 1;
    
    //チャンネル番号を入力
    printf("TVチャンネル番号を入力:");
    scanf("%d", &a);
    
    //条件分岐
    switch(a){
        case 1:
        printf("NHK-G");
        break;
        
        case 2:
        printf("NHK-E");
        break;
        
        case 3:
        printf("TVK");
        break;
        
        case 4:
        printf("NTV");
        break;
        
        case 5:
        printf("TV Asahi");
        break;
        
        case 6:
        printf("TBS");
        break;
        
        case 7:
        printf("TV Tokyo");
        break;
        
        case 8:
        printf("Fuji TV");
        break;
        
        default:
        printf("NA");
        break;
    }

    return 0;
}

