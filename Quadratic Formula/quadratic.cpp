/*
Quadratic Formula
In algebra, a quadratic equation is an equation having the form:

ax^2 + bx + c = 0

The corresponding x values are the x-intercepts of the graph, while a, b, and c are constants.

Write a C++ program called quadratic.cpp that solves the quadratic equation for the x‘s:
*/
#include <iostream>
#include <cmath>

int main() {

  double a, b, c, root1, root2;

  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  root1 = (- b + std::sqrt((b * b) - (4 * a * c))) / (2 * a);
  root2 = (- b - std::sqrt((b * b) - (4 * a * c))) / (2 * a);

  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

  return 0;

}
