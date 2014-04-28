#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {

  // generate rand seed
  srand(time(NULL));
  int choice, rand_num;
  int tries = 0;
  int max = 100;
  int min = 1;
  rand_num = 50;

  while(choice != 1) {
    ++tries;
    std::cout << "Is it " << rand_num << "?" << std::endl;
    std::cout << "1. Yes!" << std::endl;
    std::cout << "2. Higher!" << std::endl;
    std::cout << "3. Lower!" << std::endl;
    std::cout << "Tries: " << tries << std::endl;
    std::cin >> choice;

    if(choice == 1) {
      std::cout << "I'm the best, did it in " << tries << " tries!" << std::endl;
    } else if (choice == 2) {
      min = rand_num;
      rand_num += ( max - min ) / 2;
    } else if (choice == 3) {
      max = rand_num;
      rand_num -= ( max - min) / 2;
    } else {
      std::cout << "Don't try to cheat me." << std::endl;
    }
  }
  return 0;
}
