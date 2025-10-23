#include <iostream>
void ooo_message(std::string date){
  std::cout << "Thank you for your email.\nI am currently out of the office and will be back on " << date <<".\nI will respond as soon as I can upon my return.\n";
}

int main() {
  ooo_message("September 12th");
}