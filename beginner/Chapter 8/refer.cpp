//for learning reference variables (alias)
#include <iostream>

int main() {
  std::string jensen = "Jensen";
  std::string& nesnej =jensen;
  std::cout << "Jensen's value: " << jensen <<"\n";
  std::cout << "nesnej's* value: " << nesnej << "\n";
  
}