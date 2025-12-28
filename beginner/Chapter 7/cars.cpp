#include <iostream>

class Car{
  public:
    std::string brand;
    std::string model;
    int year;
    bool classic;
    Car(std::string b, std::string m, int y, bool cl){
      brand = b;
      model = m;
      year = y;
      classic = cl;
    }
    void car_info(){
      std::cout << "Car Brand: " << brand << "\nModel: " << model << "\nYear: " << year << "\n";
      if (classic == 1){
        std::cout << "This car is a classic!\n\n";
      }
      else{
        std::cout << "This car is not a classic.\n\n";
      }
    }
};

int main() {
  Car mustang("Ford", "Mustang", 1965, true);
  mustang.car_info();

  Car jaguar("Jaguar", "E-Type", 1961, false);
  jaguar.car_info();
  
}