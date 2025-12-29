#include <iostream>
#include <string>

void healPlayer(int& health) {
  health += 20;
}

int main() {
  int playerHealth = 50;
  
  healPlayer(playerHealth);

  std::cout << playerHealth << "\n";
}