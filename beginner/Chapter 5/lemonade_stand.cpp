#include <iostream>
#include <vector>

int main() {
  //lemons used daily
  std::vector<int> lemonade = {25, 28, 40, 85, 76};

  //sales for each day
  std::vector<double> sales = {75.50, 89.25, 60.00, 103,45, 95.10};

  //output of lemonade and sales for previous day:
  std::cout << "Lemonade values for yesterday: " << lemonade[4] << " \n";
  std::cout << "Sales values for yesterday: " << sales[4] << " \n";  
}