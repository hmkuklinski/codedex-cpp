#include <iostream>

//prints the options and prompts for entry:
void tips_menu(){
  std::cout << "Welcome to the Tip Calculator!\nPlease enter your tip percentage here: ";
}
//gets input from user:
int get_percentage(){
  int percent;
  std::cin >> percent;
  return percent;
}

//gets and returns the entered double value of bill total:
double get_total_price(){
  std::cout << "\nWhat was your bill total? $";
  double price;
  std::cin >> price;
  return price;
}

//calculates and returns the new total with the entered percent:
double calculate_tip_total(double total, int percent){
  double new_total = total + (total * ((double)percent/100));
  return new_total;
}

//gets and returns the number of people that will be splitting the bill:
int get_people(){
  std::cout << "\nHow many people need to split the bill? ";
  int count;
  std::cin >> count;
  return count;
}

//calculates the price per person:
double total_per_person(double price, int people){
  return price/people;
}

//prints all entered values and calculated values:
void print_results(double total_price, int percent, double total_with_tip, double individual, int num_people, std::string people_str){
  std::cout << "\n------------------------\n";
  std::cout << "Original Total: $" << total_price << "\n";
  std::cout << "Percent Tip: " << percent << "%\n";
  std::cout << "Updated Total: $"<< total_with_tip <<"\n";
  std::cout << "------------------------\n";
  std::cout << "Cost: $" << individual << " for " << num_people << " " << people_str << "\n";;
}
int main() {
  //prints options and get user entered percent value
  tips_menu();
  int percent = get_percentage();

  //get total price from user and then calculate the updated total with tip:
  double total_price = get_total_price();
  double total_with_tip = calculate_tip_total(total_price, percent);
  
  //get the number of people and calculate per person cost:
  int num_people = get_people();
  double individual = total_per_person(total_with_tip, num_people);

  //string to reflect amount of people in result statement:
  std::string people_str = num_people==1? "person": "people";

  //function call to print results:
  print_results(total_price, percent, total_with_tip, individual, num_people, people_str);
}