#include <iostream>

int main() {
  int choice;
  int count = 0;
  do {
    std::cout << "Enter a number other than " << count << "!" << std::endl;
    std::cin >> choice;
    count++;
  } while (choice != count-1);

  std::cout << "Hey you're not supposed to enter " << count-1 << "!" << std::endl;

  return 0;
}