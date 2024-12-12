#include <stdio.h>

int main(){
    
    int a = 9;
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

return 0;
}
