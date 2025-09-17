#include <iostream>

int main() {
  int age = 21;
  bool citizen=true;
  bool registered = true;

  if (age == 21 && citizen && registered){
    std::cout << "You can vote!\n";
  }
  else if (!age==21 && citizen && registered){
    std::cout << "You are not old enough to vote.\n";
  }
  else if (age == 21 && !citizen && registered){
    std::cout << "You are not eligible to vote.\n";
  }
  else if (age == 21 && citizen && !registered){
    std::cout<<"You need to register first.\n";
  }
  else{
    std::cout << "You have not met the requirements.\n";
  }
}
