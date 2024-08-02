//RIDDHI LOKHANDE
//ENTC B2
//23070123107
//EXP 6G
#include <iostream>

int main() {
    for (int i = 1; i <= 10; ++i) {
        int j = 1;  
        while (j <= 10) {
            std::cout << i * j << "\t"; 
            ++j;  
        }

        std::cout << std::endl;  
    }
    return 0;
}
