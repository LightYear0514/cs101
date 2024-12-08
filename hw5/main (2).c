#include <stdio.h>

int main() {
    int i = 12345;  
    int new_number = 0;

    
    if (i >= 10000) {  
        int unit = i % 10;                 
        int thousand = (i / 1000) % 10;   
        int middle = (i / 10) % 100;      
        int ten_thousand = i / 10000;     

        
        new_number = unit * 10000 + ten_thousand * 1000 + middle * 10 + thousand;
    } else if (i >= 1000) {  
        
    } else if (i >= 100) {   
        
    } else if (i >= 10) {    
        
    } else {  
        new_number = i * 1000;
    }

    printf("新數字: %d\n", new_number);

    return 0;
}
