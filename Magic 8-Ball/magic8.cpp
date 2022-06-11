/*
Magic 8-Ball
The Magic 8-Ball is a super popular toy used for fortune-telling or seeking advice, developed in the 1950s!

Write a magic8.cpp program that will output a random fortune each time it executes.

Magic 8-Ball, should I do this project?

The answers inside a standard Magic 8-Ball are:

It is certain.
It is decidedly so.
Without a doubt.
Yes - definitely.
You may rely on it.
As I see it, yes.
Most likely.
Outlook good.
Yes.
Signs point to yes.
Reply hazy, try again.
Ask again later.
Better not tell you now.
Cannot predict now.
Concentrate and ask again.
Don't count on it.
My reply is no.
My sources say no.
Outlook not so good.
Very doubtful.
For example:

MAGIC 8-BALL:

It is decidedly so.
Or:

MAGIC 8-BALL:

Very doubtful.
*/
#include <iostream>
#include <cstdlib>

int main() {

  // Your future is here
  std::cout << "MAGIC 8-BALL: \n";

  srand(time(NULL));

  int answer = std::rand() % 10;

  std::cout << answer << "\n";

  if (answer == 0) {
    std::cout << "It is certain.\n";
  } else if (answer == 1) {
    std::cout << "It is decidedly so.\n";
  } else if (answer == 2) {
    std::cout << "Without a doubt.\n";
  } else if (answer == 3) {
    std::cout << "Yes - definitely.\n";
  } else if (answer == 4) {
    std::cout << "You may rely on it.\n";
  } else if (answer == 5) {
    std::cout << "As I see it, yes.\n";
  } else if (answer == 6) {
    std::cout << "Most likely.\n";
  } else if (answer == 7) {
    std::cout << "Outlook good.\n";
  } else if (answer == 8) {
    std::cout << "Yes.\n";
  } else if (answer == 9) {
    std::cout << "Signs point to yes.\n";
  } else if (answer == 10) {
    std::cout << "Reply hazy, try again.\n";
  } else if (answer == 11) {
    std::cout << "Ask again later.\n";
  } else if (answer == 12) {
    std::cout << "Better not tell you now.\n";
  } else if (answer == 13) {
    std::cout << "Cannot predict now.\n";
  } else if (answer == 14) {
    std::cout << "Concentrate and ask again.\n";
  } else if (answer == 15) {
    std::cout << "Don't count on it.\n";
  } else if (answer == 16) {
    std::cout << "My reply is no.\n";
  } else if (answer == 17) {
    std::cout << "My sources say no.\n";
  } else if (answer == 18) {
    std::cout << "Outlook not so good.\n";
  } else {
    std::cout << "Very doubtful.\n";
  }

}
