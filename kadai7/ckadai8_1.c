/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    //配列を定義
    char str[4];
    
    //キーボードから入力
    printf("文字を入力：");
    scanf("%s", str);
    
    //文字列の比較
    if(strcmp(str, "yes") == 0){
        printf("good");
    }else if(strcmp(str,"no") == 0){
        printf("bad");
    }
    
    
    return 0;
}

