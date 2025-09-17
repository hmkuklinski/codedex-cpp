#include <iostream>

int main() {
  for(int i=99;i>0;i--){
    std::cout << i << " bottles of beer on the wall.\n" << i << " bottles of beer.\nTake one down, pass it around.\n" << i-1 << " bottles of beer on the wall. \n\n";
  }
}