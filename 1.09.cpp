#include <iostream>

int main(){
    int x,a,b;

    std::cin >> x >> a >> b;

    x ++;
    std::cout << x << std::endl;

    x *= a + b;
    std::cout << x << std::endl;

    x *= x;
    std::cout << x << std::endl;

    x --;
    std::cout << x << std::endl;
}
