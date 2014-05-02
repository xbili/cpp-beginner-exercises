#include <iostream>

void say_hello() {
  std::cout << "Hello!" << std::endl;
}

void multi_hello(int number) {
  for (int i = 0; i < number; ++i) {
    say_hello();
  }
}

int multiply(int number1, int number2) {
  return number1 * number2;
}

int half(int number) {
  std::cout << number << std::endl;
  number /= 2;
  if (number > 0) {
    number = half(number);
  }
  return number;
}

int main() {
  multi_hello(5);

  int numbah;
  numbah = multiply(5, 6);
  std::cout << numbah << std::endl;
  std::cout << "Input a number to keep halving!" << std::endl;
  std::cin >> numbah;
  numbah = half(numbah);
  std::cout << numbah << std::endl;

  return 0;
}
