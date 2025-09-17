#include <iostream>
#include <vector>

int main() {
  //grocery list
  std::vector<std::string> cart = {"🍕 Pepperoni pizza", "🥗 Garden salad","🥤 Diet Coke"};
  
  //print out the shopping list generated: 
  std::cout << "MY SHOPPING LIST: \n";
  for(int i=0; i<cart.size();i++){
    std::cout << cart[i] << "\n";
  }
  //print out current size of shopping list:
  std::cout << "The cart's size before adding the marina sauce is: " << cart.size() << "\n\n";
  
  //add marinara sauce:
  cart.push_back("🥫 Marinara sauce");


  //printing out the list after adding an element:
  std::cout << "MY SHOPPING LIST: \n";
  for(int i=0; i<cart.size();i++){
    std::cout << cart[i] << "\n";
  }
  //print out updated size of shopping list:
  std::cout << "The cart's after adding the marina sauce is: " << cart.size() << "\n\n";

  //remove it
  cart.pop_back();

  //printing out the list after removing it: 
  std::cout << "MY SHOPPING LIST: \n";
  for(int i=0; i<cart.size();i++){
    std::cout << cart[i] << "\n";
  }
  //checking that size is updated after removal:
  std::cout << "The cart's size after removing the marina sauce is: " << cart.size() << "\n\n";
  
}