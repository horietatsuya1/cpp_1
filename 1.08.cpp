#include <iostream>

int main() {
  int a,price,N;
  std::cin >> a;
  std::cout << "パターン" << a << std::endl;

  if(a == 1){
    std::cin >> price;
    std::cout << "price " << price << std::endl;
  }

  std::cin >> N;
  std::cout << N << "個" << std::endl;

  std::cout << "たこ焼き1セットあたりの値段は " << price * N << "です" << std::endl;
}
