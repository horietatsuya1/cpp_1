#include <iostream> 

int main() {
  std::string S;
  std::cin >> S;
 
  int answer = 1;
 
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+') {
      answer++;
    }
    if (S.at(i) == '-') {
      answer--;
    }
  }
 
  std::cout << answer << std::endl;
}
