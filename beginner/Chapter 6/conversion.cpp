#include <iostream>
int squared(int one){
  return one*one;
}
int main() {
  for(int i=0;i<=10;i++){
    std::cout << "The squared value of " << i << " is: " << squared(i) << "\n";
  }
  
}