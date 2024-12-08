#include <stdio.h>

int main(){
    
    int a = 9;//金字塔層數
    int b = 1;
    
    do{
        printf("%*s", a, "");
        for (int i=0;i < b;i++){
            printf("%d",b);
            printf(" ");
        }
        printf("\n");
        a = a-1;
        b = b+1;
    }
    while ( a!=0 );
//執行輸出層數的數字,只會輸出金字塔層數的數字加上空格
return 0;
}
//等等,這沒有兩個loop阿