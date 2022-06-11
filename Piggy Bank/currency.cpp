/*
Piggy Bank
You just returned from a trip to South America. The countries you visited were Colombia, Brazil, and Peru. You arrived back in your country with some foreign currencies from these three countries.

Piggy Bank
Write a C++ program called currency.cpp that prompts the user for the amount of each foreign currency. Your prompts should look like:

Enter number of Colombian Pesos:
Enter number of Brazilian Reais:
Enter number of Peruvian Soles:
Your program should then convert the amount entered by the user and display the total amount of USD. Your final output should look like:

US Dollars = $______
*/
#include <iostream>

int main() {

  double pesos, reais, soles, dollars;

  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // 1 Peso = 0.00025 USD
  // 1 Real = 0.18 USD
  // 1 Sol = 0.29 USD
  dollars = (0.00025 * pesos) + (0.18 * reais) + (0.29 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";

}
