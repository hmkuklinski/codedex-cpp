#include <iostream>
#include <vector>

int main() {
  //declare even and odd sum variables:
  int evensum = 0;
  int oddsum = 0;
  //declare even and odd product variables- start with int value of 1:
  int evenproduct = 1;
  int oddproduct= 1;

  //vectors of odds and evens:
  std::vector<int> evens;
  std::vector<int> odds;

  //number vector:
  std::vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};

  for (int i=0;i<num.size();i++){
    //an even number: add to evensum, multiply num by evenproduct, add to evens vector
    if (num[i] %2 ==0){
      evensum += num[i];
      evenproduct *= num[i];
      evens.push_back(num[i]);
    }
    //an odd number: add to oddsum, multiply num by oddproduct, add to odds vector
    else{
      oddsum += num[i];
      oddproduct *= num[i];
      odds.push_back(num[i]);
    }
  }
  //print out the evens vectors:
  std::cout << "All of your even numbers: ";
  for(int i=0;i<evens.size();i++){
    std::cout << evens[i] << " ";
  }

  //print out the odds vectors:
  std::cout << "\nAll of your odd numbers:";
  for(int i=0;i<odds.size();i++){
    std::cout << odds[i] << " ";
  }
  //print out the sum of even and odd numbers from the vector:
  std::cout << "\n\nThe sum of even numbers: " << evensum << "\n";
  std::cout << "The sum of odd numbers: " << oddsum << "\n\n";

  //print out the product of even and odd numbers from the vector:
  std::cout << "The product of the odd numbers: " << oddproduct << "\n";
  std::cout << "The product of the even numbers: " << evenproduct << "\n";
  
}