#include <iostream>

class Cat{
  public:
    std::string name;
    std::string breed;
    int age;
    bool rescued;
    int mood;
    int hunger;
    
    //constructor:
    Cat(std::string n, std::string b, int a, bool r, int m, int h){
      name = n;
      breed = b;
      age = a;
      rescued = r;
      mood = m;
      hunger = h;
    }
    
    //prints rescue status boolean message for basic cat info function:
    void rescue_str(){
      if (rescued == 1){
        std::cout << "This cat has been rescued!\n";
      }
      else{
        std::cout << "This cat is up for adoption.\n";
      }
    }

    //prints cat's information (not including mood/hunger):
    void get_info(){
      std::cout << "---------------\nCat's Name: " << name << "\nBreed: " << breed << "\nAge: " << age << "\n";
      rescue_str();
    }

    //function to feed cat--> increments hunger if fed. otherwise, prints that cat is full
    void feed(){
      if (hunger <10){
        std::cout << name << " was very hungry. +1 to hunger level.\n\n";
        hunger++;
      }
      else{
        std::cout << name <<  " is already full!\n\n";
      }
    }

    //function to play with cat--> increases mood (max 10)
    void play(){
      if (mood <10){
        std::cout << name << " is so happy to play with you. +1 to mood.\n\n";
        mood++;
      }
      else{
        std::cout << name << " is already very happy.\n\n";
      }
    }

    //prints out the cat's hunger and mood stats:
    void status(){
      std::cout <<"\n" << name << "'s Stats: \n";
      std::cout << "Hunger level: " << hunger << "\nMood: " << mood << "\n\n";
    }

    //when creating cat--> prints general stats and mood/hunger stats:
    void all_info(){
      get_info();
      status();
    }
};

int main() {
  //create at least two cat objects
  Cat tom("Tom", "Black", 5, false, 1, 10);
  Cat garfield("Garfield", "Tabby", 7, true, 10, 1);

  //user menu:
  bool gameLoop = true;
  while (gameLoop){
    std::cout << "What would you like to do?\n1. View the Pets\n2. Play with Tom\n3. Play with Garfield\n4. Feed Tom \n5. Feed Garfield \n6. Quit\n\nEnter numerical selection here: ";
    int input;
    std::cin >> input;
    std::cout << "\n";
    //view both pets:
    if (input ==1){
      tom.all_info();
      garfield.all_info();
      std::cout << "---------------\n\n";
    }
    //play with tom
    else if (input ==2){
      tom.play();
    }
    //play with garfield
    else if (input ==3){
      garfield.play();
    }
    //feed tom
    else if (input == 4){
      tom.feed();
    }
    //feed garfield
    else if (input == 5){
      garfield.feed();
    }
    else if (input == 6){
      gameLoop = false;
    }
    else{
      std::cout << "Invalid input. Please try again.\n\n";
    }
  }
   
  
}