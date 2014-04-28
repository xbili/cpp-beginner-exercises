#include <iostream>

int main() {
  std::cout << "Hello, input your choice of drink!" << std::endl;
  std::cout << "1. Coke" << std::endl;
  std::cout << "2. Sprite" << std::endl;
  std::cout << "3. Dr. Pepper" << std::endl;

  int choice;
  std::cin >> choice;

  if(choice > 3) {
    std::cout << "Error: You have input an invalid case" << std::endl;
    return 1;
  }

  std::cout << "You chose " << choice << ": ";
  switch (choice) {
    case 1:
    std::cout << "Coke" << std::endl;
    break;

    case 2:
    std::cout << "Sprite" << std::endl;
    break;

    case 3:
    std::cout << "Dr. Pepper" << std::endl;
    break;
  }
  return 0;
}