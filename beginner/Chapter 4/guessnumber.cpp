#include <iostream>
#include <cstdlib>

int main() {
  //for the random seed generator
  srand(time(NULL));

  //the correct answer's value is set:
  int ans = std::rand() % 10;

  //variable that will hold entered answer;
  int entered;

  //will continue to prompt for number entry while guess is incorrect:
  while (entered!=  ans){
    //prompt here:
    std::cout << "Guess the number: ";
    //store reentry into entered:
    std::cin >> entered;
  }
  //user guessed it right --> print out success number:
  std::cout << "You guessed it correct!";
  
}