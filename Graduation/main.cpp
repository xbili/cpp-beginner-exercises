#include <iostream>
#include <cstdlib>
#include <list>
#include <iterator>
#include "bunny.h"

int main() {
  // generate random seed
  srand(time(NULL));
  
  // create a linked list of bunnies!
  std::list<Bunny> bunny_list;

  // create 5 bunnies
  for (int i = 0; i < 5; ++i) {
    bunny_list.push_back(Bunny());
  }

  auto curr = bunny_list.begin();
  auto end = bunny_list.end();
  int bunny_count = 0;

  while(curr != end) {
    ++bunny_count;
    std::cout << "Bunny number " << bunny_count << ": " << std::endl;
    (*curr).display_info();
    ++curr;
  }
  
  
  return 0;
}
