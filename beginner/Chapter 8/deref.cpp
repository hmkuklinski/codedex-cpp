#include <iostream>
#include <string>

int main() {
    //tips:
    std::string tip1 = "🍎 Stay consistent: Even 10 minutes of daily practice adds up.";
    std::string tip2 = "✍️ Take notes: Writing things down helps concepts stick.";
    std::string tip3 = "🚀 Build small projects: Apply what you learn in simple, hands-on ways.";
    std::string tip4 = "👯 Join a community: Learning is easier (and way more fun) when you're not doing it alone.";

    //pointers:
    std::string* pTip1 = &tip1;
    std::string* pTip2 = &tip2;
    std::string* pTip3 = &tip3;
    std::string* pTip4 = &tip4;

    //print out values of pointers:
    std::cout << pTip1 << "\n";
    std::cout << pTip2 << "\n";
    std::cout << pTip3 << "\n";
    std::cout << pTip4 << "\n";

    //get the values from pointers:
    std::cout << *pTip1 << "\n";
    std::cout << *pTip2 << "\n";
    std::cout << *pTip3 << "\n";
    std::cout << *pTip4 << "\n";
  
}
