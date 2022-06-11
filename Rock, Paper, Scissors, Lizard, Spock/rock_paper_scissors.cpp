/*
Rock, Paper, Scissors, Lizard, Spock
You may have played Rock, Paper, Scissors, but have you played Rock, Paper, Scissors, Lizard, Spock? This is the infamous game brought to popularity with the TV show The Big Bang Theory.

Write a rock_paper_scissors.cpp program that:

Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compares the user’s choice and the computer’s choice and determine the winner.
Informs the user who the winner is.
*/

#include <iostream>
#include <stdlib.h>

int main() {

  // Live long and prosper
  srand (time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "====================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Spock\n";
  std::cout << "5) Lizard\n";

  std::cout << "shoot! ";
  std::cin >> user;

  std::cout << user << " vs " << computer;

  int x = (user - computer + 5) % 5;

  if (x == 1 || x == 3) {
    std::cout << "\nWin\n";
  } else if (x == 2 || x == 4) {
    std::cout << "\nLose\n";
  } else if (x == 0) {
    std::cout << "\nDraw\n";
  }

}
