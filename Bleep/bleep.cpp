/*
Bleep
“You don’t have to burn books to destroy a culture. Just get people to stop reading them.” - Ray Bradbury

Congratulations on your new job at the Department of Re-education! You have been tasked with building an algorithm that can bleep out any words deemed unsavory by the powers that be.

Write a bleep.cpp program that “bleeps” any word that’s passed in. You’ll test this out with "broccoli", which has been recently banned by the Department.

Turn some text like "I'm rolling up my broccoli" into "I'm rolling up my ********".

Make sure to use pass-by-reference in your functions so you can modify the incoming text!
*/

#include <iostream>
#include <string>

void bleep(std::string const &word, std::string &text);

int main() {
  std::string word = "broccoli";
  std::string text = "This is broccoli one, that is broccoli two, the other one is broccoli three, over there is broccoli four, that other one is broccoli five, beside that one is broccoli six, behind is broccoli seven.\n";

  bleep(word, text);
  std::cout << text;
}

void bleep(std::string const &word, std::string &text) {
  for (int i = 0; i < text.size(); i++) {
    if (word.compare(text.substr(i, 8)) == 0) {
      text.replace(i, 8, "********");
    }
  }
}
