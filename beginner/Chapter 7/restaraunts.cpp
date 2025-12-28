#include <iostream>
#include <string>

class Restaraunt{
  std::string name;
  std::string category;
  double rating;
  std::string price;
  bool delivery;
};


int main() {
  Restaraunt peter_luger;
  peter_luger.name = "Peter Luger Steak House";
  peter_luger.category = "American";
  peter_luger.rating = 4.4;
  peter_luger.price= "$$$$";
  peter_luger.delivery = false;

  std::cout << "Name: " << peter_luger.name << "\n";
  std::cout << "Category: " << peter_luger.category << "\n";
  std::cout << "Rating: " << peter_luger.rating << "\n";
  std::cout << "Price: " << peter_luger.price << "\n";
  std::cout << "Delivery: " << peter_luger.delivery << "\n";
  
}