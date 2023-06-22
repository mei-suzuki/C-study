/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    //変数定義
    char str[4];
    
    //曜日を入力
    printf("MonかTueを入力:");
    scanf("%s", str);
    
    //構造体を定義
    typedef struct lecture{
        char name[10];
        char day[4];
        int period;
    }lecture_t;
    
    //変数定義
    lecture_t data[8]=
    {
        {"Japanese", "Mon", 1},
        {"Math", "Mon", 2},
        {"PE", "Mon", 3},
        {"Arts", "Mon", 4},
        {"Science", "Tue", 1},
        {"English", "Tue", 2},
        {"Society", "Tue", 3},
        {"Music", "Tue", 4},
    };
    
    
    
    //場合分けして出力
    if(strcmp(str, "Mon")==0){
        for(int i=0;i<4;i++){
            printf("開講時限：%d\t", data[i].period);
            printf("科目：%s\n", data[i].name);
        }
    }else if(strcmp(str, "Tue")==0){
        for(int i=4;i<8;i++){
            printf("開講時限：%d\t", data[i].period);
            printf("科目：%s\n", data[i].name);
        }
    }
    

    return 0;
}
