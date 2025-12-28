#include <iostream>

class WealthyFamily{
  public:
    std::string name;
    int networth;
};

int main() {
  WealthyFamily mackenzie;
  mackenzie.name = "Mackenzies";
  mackenzie.networth = 1000000;

  //print information:
  std::cout<< "The " << mackenzie.name << "\n";
  std::cout << "We are worth $" << mackenzie.networth << "\n";
  
}