#include <iostream>

int main() {
  std::cout << "Enter your pathetic grade..." << std::endl;
  int grade;
  std::cin >> grade;

  if (grade >= 90 && grade < 100) {
    std::cout << "You've scored an A, not so pathetic afterall." << std::endl;
  } else if (grade >= 80) {
    std::cout << "It's a B." << std::endl;
  } else if (grade >= 70) {
    std::cout << "It's a C." << std::endl;
  } else if (grade >= 60) {
    std::cout << "It's a D." << std::endl;
  } else if (grade >= 50) {
    std::cout << "It's an E" << std::endl;
  } else if (grade < 50) {
    std::cout << "You failed. Badly." << std::endl;
  } else {
    std::cout << "You didn't even enter a number.";
  }

  return 0;
}