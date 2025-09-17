#include <iostream>
#include <unordered_map>
#include <string>

int main() {
  //my array of questions:
  std::string questions[] = {
    "💧 What is the name of the world's longest river?",
    "🦴 How many bones are in the human body?",
    "😷 What food never spoils?",
    "🌱 What is the name of the tallest grass on earth?",
    "🎲 How many dots are on a pair of dice?"
  };

  //make an unordered map that takes string and maps to question index:
  std::unordered_map<std::string, int> answers;
  answers["nile"]= 0;
  answers["206"] = 1;
  answers["honey"] = 2;
  answers["bamboo"]= 3;
  answers["42"] = 4;

  //get the number of questions (use for loop)
  int num_questions = sizeof(questions)/sizeof(questions[0]);

  //use to keep score of correct answers:
  int correct_ans = 0;

  //intro message:
  std::cout << "Welcome to the Trivia Quiz! Please type your answers in all lowercase letters!\n";

  //game logic:
  for (int i=0;i<num_questions;i++){
    //print out the question:
    std::cout << questions[i] + " ";

    //get the answer from the user, store in ans, cast to lowercase for check:
    std::string ans;
    std::cin >> ans;

    //if ans entered matches answers key, print correct and increment score:
    if (answers.find(ans) != answers.end() && answers[ans]==i){
      std::cout << "That's correct!\n\n";
      correct_ans +=1;
    } //incorrect answer entered:
    else{
      std::cout << "That's incorrect\n\n";
    }
  }

  std::cout << "Game over! Your score is: " << correct_ans + "\n";
  
}
