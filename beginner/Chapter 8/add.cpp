#include <iostream>
#include <string>

int main() {
  // learning about addresses of variables:
  std::string nickname = "Hannie";
  double worst_grade = 60.00;
  int graduation = 2016;
  char first_initial = 'H';

  std::cout << "Nickname value: " << nickname << "\nAddress of nickname: " << &nickname <<"\n\n";
  std::cout << "Worst grade value: " << worst_grade << "\nAddress of worst grade: " << &worst_grade << "\n\n";
  std::cout << "Graduation year value: " << graduation << "\nAddress of graduation: " << &graduation << "\n\n";
  std::cout << "First initial value: " << first_initial << "\nAddress of first initial: " << &first_initial << "\n\n";
}