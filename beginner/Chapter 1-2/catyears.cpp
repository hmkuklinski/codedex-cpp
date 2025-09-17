#include <iostream>

int main() {
  //declare cat's age variable:
  int cat_age;

  //print menu and prompt:
  std::cout <<"Welcome to the Cat Years program! This only works for cats older than 2 years old. \nEnter your cat's age: ";

  //get user's input and store in cat_age variable
  std::cin >> cat_age;

  //use formula to calculate human age of cat
  int human_age = (cat_age-2)*4 + 24;

  //print out result:
  std::cout << "Your cat is " << human_age << " years old in human years.";
  
}