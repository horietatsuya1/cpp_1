#include <iostream>

int main() {
  int A, B;
  std::cin >> A >> B;

  int i = 0;
  std::cout << "A:";
  while (i < A) {
    std::cout << "]";
    i++;
  }
  std::cout << std::endl;

  i = 0;
  std::cout << "B:";
  while (i < B) {
    std::cout << "]";
    i++;
  }
  std::cout << std::endl;
}
