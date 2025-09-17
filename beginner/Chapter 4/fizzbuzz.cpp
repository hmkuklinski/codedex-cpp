#include <iostream>

int main() {
  //menu declaration, with prompt for how many rounds of loop:
  std::cout << "Welcome to FizzBuzz Solver. How high would you like to solve up to? \n";
  
  //store that value in the ans variable:
  int ans;
  std::cin >> ans;

  //logic for FizzBuzz:
  for(int i=1;i<ans+1;i++){
    if (i%3==0 && i%5==0){
      std::cout << "FizzBuzz\n";
    }
    else if (i%3 ==0){
      std::cout << "Fizz\n";
    }
    else if (i%5 == 0){
      std::cout << "Buzz\n";
    }
    else{
      std::cout << i << "\n";
    }
  }
  
}