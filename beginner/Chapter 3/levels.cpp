#include <iostream>

int main() {
  int level = 22;
  if (level>=21){
    std::cout << "💎 Diamond";
  }
  else if(level>=16){
    std::cout << "🏅 Platinum";
  }
  else if (level >=11){
    std::cout << "🥇 Gold";
  }
  else if (level>=6){
    std::cout << "🥈 Silver";
  }
  else{
    std::cout << "🥉 Bronze";
  }
  
}
