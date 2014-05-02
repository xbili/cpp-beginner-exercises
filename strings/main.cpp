#include <iostream>

int main() {
  std::string first_name, last_name;

  std::cout << "Input first name." << std::endl;
  std::cin >> first_name;
  
  std::cout << "Input last name." << std::endl;
  std::cin >> last_name;

  std::string full_name;
  full_name = first_name + " " + last_name;

  std::cout << "Your name is " << full_name << std::endl;

  // change vowels to 'z'
/*  for(int i = 0; i < full_name.length(); ++i) {
    if(full_name[i] == 'a' || full_name[i] ==  'e' || full_name[i] == 'i' || full_name[i] == 'o' || full_name[i] == 'u') {
      full_name[i] = 'z';
    } 
  } */

  // reverse the order
  int length = full_name.length();
  std::cout << length << std::endl;
  std::string reversed_name = full_name;
  for(int i = 0; i < length; ++i) {
    reversed_name[i] = full_name[length - i - 1];
    std::cout << reversed_name[i] << std::endl;
  }

  std::cout << "Now your name is " << reversed_name << std::endl;
  return 0;
}
