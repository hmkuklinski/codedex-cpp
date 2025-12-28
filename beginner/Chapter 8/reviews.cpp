#include <iostream>
//pass in pointer (address) and access the value in print message:
void reviewAction(const std::string* name, const std::string* extraComment){
  if (name == nullptr && extraComment != nullptr){
    std::cout << "Thanks for the review, valued customer!\n";
  }
  else if (name != nullptr && extraComment == nullptr){
    std::cout << "Thanks for the review, " << *name << "!\n";
  }
  else if (name != nullptr && extraComment != nullptr){
    std::cout << "Thanks for the review, " << *name <<". The team will get back to you if you had any questions.\n";
  }
  else{
    std::cout << "Thank you. Have a nice day!\n";
  }
}
int main() {
  //create the name and review and pass those in to review action:
  std::string name="Hannah";
  std::string review = "Food was decent. Could be better";
  reviewAction(&name, &review);
  
}