//RIDDHI LOKHANDE 
//EXP 6 E
//23070123107
//ENTC B2
#include <iostream>
int main() {
    int i = 1;  
    
    while (i <= 10) {
        int j = 1;  
        
        while (j <= 10) {
            std::cout << i * j << "\t";  
            ++j;  
        }

        std::cout << std::endl;  
        ++i;  
    }

    return 0;
}
