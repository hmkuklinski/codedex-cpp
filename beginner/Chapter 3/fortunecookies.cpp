#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
  //for random seed:
  srand(time(NULL));
  
  //all the possible fortunes:
  std::string fortunes[] = {
    "Don't pursue happiness – create it.",
    "All things are difficult before they are easy.",
    "The early bird gets the worm, but the second mouse gets the cheese.",
    "Someone in your life needs a letter from you.",
    "The fortune you search for is in another cookie.",
    "Help! I'm being held prisoner in a Chinese bakery!"
  };

  //get the length of the fortune array:
  int len_fortunes = sizeof(fortunes)/sizeof(fortunes[0]);

  //generate a random index for the fortunes array:
  int answer = std::rand() % len_fortunes;

  //generate the random numbers:
  int numbers[6];
  for(int i=0;i<6;i++){
    numbers[i]= std::rand() %50;
  }

  //print out randomly generated fortune and lucky numbers:
  std::cout << "🥠 " + fortunes[answer] + "\n\n";
  std::cout << "Lucky numbers: " ;

  for (int i = 0; i <6; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl; //flush buffer and new line

}
