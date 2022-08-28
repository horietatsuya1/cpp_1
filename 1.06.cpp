#include <iostream>
 
int main(){
 
    int A,B;
    string op;
 
    std::cin >> A >> op >> B;
 
    if(op == "+")
        std::cout << A + B << std::endl;
    else if(op == "-")
        std::cout << A - B << std::endl;
    else if(op == "*")
        std::cout << A * B << std::endl;
    else if(op == "/" && B != 0)
        std::cout << A / B << std::endl;
    else
        std::cout << "error" << std::endl;
}
