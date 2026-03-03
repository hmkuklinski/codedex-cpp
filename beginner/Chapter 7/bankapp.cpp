#include <iostream>

class BankAccount{
  public:
    std::string name;
    int account_id;
    std::string account_type;
    double balance;

    double deposit(double added){
      balance += added;
      return balance;
    }
    void withdraw(double removed){
      balance -= removed;
    }
    void display_balance(){
      std::cout << "The current value of your balance is: " << balance << "\n";
    }
};

int main() {
  BankAccount myAc;
  myAc.name = "Hannah's Bank Account";
  myAc.account_id = 1;
  myAc.account_type = "Checkings";
  myAc.balance = 0.00;

  //deposit:
  myAc.display_balance();
  double balance = myAc.deposit(96.00);
  std::cout << "Deposited $96.00 to account.\n";

  //withdraw:
  myAc.withdraw(25.00);
  std::cout << "Withdrew $25.00 from account.\n";

  //output current balance:
  myAc.display_balance();

  
}