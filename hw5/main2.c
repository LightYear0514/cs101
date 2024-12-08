#include <stdio.h>
#include <math.h>  

int main() {
    double pi = 0.0;
    double term;
    int x = 0;  
    double target = 3.14159;

    
    do {
        term = 4.0 / (2 * x + 1);  
        if (x % 2 == 1) {
            term = -term;         
        }
        pi += term;               
        x++;
    } while (fabs(pi - target) >= 0.00001);  

    
    printf("最小迭代次數: %d\n", x);
    printf("計算出的 pi: %.5f\n", pi);

    return 0;
}
