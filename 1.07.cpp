#include <iostream>

int main(){

  bool a = true;
  bool b = false;
  bool c = true;
 
  if (a) {
    std::cout << "At";
  }
  else {
    std::cout << "Yo";
  }
 
  if (!a && b) {
    std::cout << "Bo";
  }
  else if (!b || c) {
    std::cout << "Co";
  }
 
  if (a && b && c) {
    std::cout << "foo!";
  }
  else if (true && false) {
    std::cout << "yeah!";
  }
  else if (!a || c) {
    std::cout << "der";
  }
 
  std::cout << std::endl;
}
