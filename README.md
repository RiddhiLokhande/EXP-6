# EXP-6
## Aim

- To implement and study  C++ decision making statement loops

## Software required-

You need to have a C++ compiler installed on your system. Common options include:

- [Microsoft Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)

## Theory
 In C++, for, while, and do-while loops are control flow statements that allow you to execute a block of code multiple times based on conditions. Each loop type serves different scenarios based on how you need to iterate and the condition checks.
#### Loops
-for Loop
The for loop is typically used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment/decrement.
-while Loop
The while loop is used when the number of iterations is not known beforehand and the condition needs to be checked before executing the loop body.
do-while Loop
The do-while loop is similar to the while loop, but it guarantees that the loop body will execute at least once because the condition is checked after the loop body.

## CODE 1 FOR LOOP
```cpp

/RIDDHI LOKHANDE 
//EXP 6 A
//23070123107
//ENTC B2

#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=0;i<10;i++) {
    cout<<i+1<<"\n";
    }
    return 0;
}
```
### Output
![image](https://github.com/user-attachments/assets/30d90e4e-ab66-4501-9b6a-7de0eb619981)
## CODE 1 WHILE LOOP
```cpp

/RIDDHI LOKHANDE 
//EXP 6 B
//23070123107
//ENTC B2
#include <iostream>
int main() {
    int i = 1; 
    while (i <= 10) {
        std::cout << i << std::endl; 
        i++; 
    }

    return 0;
}


```
### Output
![image](https://github.com/user-attachments/assets/8cfa2a14-3d1c-4632-8c1b-ff619c2de7f1)

## CODE 1 WHILE LOOP
```cpp

/RIDDHI LOKHANDE 
//EXP 6 C
//23070123107
//ENTC B2
#include <iostream>
int main() {
    int i = 1; 
    while (i <= 10) {
        std::cout << i << std::endl; 
        i++; 
    }

    return 0;
}


```
### Output
![image](https://github.com/user-attachments/assets/41b43dad-c53d-47cf-b8e6-c918e4163f03)



## Conclusion
We learnt the implementation and study of decision making loops in C++ language.
