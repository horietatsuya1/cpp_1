#include <iostream> 

int main() {
  int N, A;
  std::cin >> N >> A;
 
  for (int i = 0; i < N; i++) {
    int x;
    std::string op;
    std::cin >> op >> x;
 
    if (op == "+") {
      A += x;
    }
    else if (op == "-") {
      A -= x;
    }
    else if (op == "*") {
      A *= x;
    }
    else if (op == "/" && x != 0) {
      A /= x;
    }
    else {
      std::cout << "error" << std::endl;
      break;
    }
 
    std::cout << i + 1 << ":" << A << std::endl;
  }
 
}
