#include <iostream>
#include <string>
#include <vector>

int main() {
  //my tips:
  std::string tip1 = "🍎 Stay consistent: Even 10 minutes of daily practice adds up.";
  std::string tip2 = "✍️ Take notes: Writing things down helps concepts stick.";
  std::string tip3 = "🚀 Build small projects: Apply what you learn in simple, hands-on ways.";
  std::string tip4 = "👯 Join a community: Learning is easier (and way more fun) when you're not doing it alone.";

  //a pointer to each one of my tips:
  std::string* pTip1 = &tip1;
  std::string* pTip2 = &tip2;
  std::string* pTip3 = &tip3;
  std::string* pTip4 = &tip4;

  //make vector of the tips and a vector of the pointer to tips:
  std::vector<std::string> tips = {tip1, tip2, tip3, tip4};
  std::vector<std::string*> tipPointers = {pTip1, pTip2, pTip3, pTip4};

  //print out the tip and its corresponding address:
  std::cout << "My Tips: \n";
  for(int i=0;i<tips.size();i++){
    //just printing out tip and tip's address from pointer variable:
    std::cout << "Tip " << i+1 << ": " << tips[i] << "\n";
    std::cout << "Tip address: " << tipPointers[i] << "\n\n";

    //print out print value using * on pointer:
    std::cout << "Get the tip value using * on pointer: " << *tipPointers[i] << "\n\n";

    //get address of pointer in array:
    std::cout << "Can we get address of where variable is in tips array? Sure! " << &tips[i] <<"\n\n";

    std::cout << "Address of pointer variable in pointer array? " << &tipPointers[i] << "\n\n";
  }
  
}
