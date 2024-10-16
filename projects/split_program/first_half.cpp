#include <iostream>

int getValue();
int main(){
    int a{getValue()};
    int b{getValue()};
    std::cout << a + b;

    
}
