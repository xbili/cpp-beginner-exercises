#include <iostream>
#include <cstdlib>
#include "bunny.h"

// Bunny constructor
Bunny::Bunny() {
  this->set_sex();
  this->set_color();
  this->set_age();
  this->set_name();
  this->set_radioactive_mutant_vampire_bunny();
}

// Bunny destructor
Bunny::~Bunny() {
  // nothing interesting here
}

// displays info of Bunny
void Bunny::display_info() {
  std::cout << this->sex << std::endl;
  std::cout << this->color << std::endl;
  std::cout << this->age << std::endl;
  std::cout << this->name << std::endl;
  std::cout << this->radioactive_mutant_vampire_bunny << std::endl;
}

// sets the sex of Bunny
void Bunny::set_sex() {
  int odds = rand() % 2;
  if (odds == 0) {
    this->sex = "male";
  } else {
    this->sex = "female";
  }
}

// sets the color of Bunny
void Bunny::set_color() {
  std::string colors[] = {"white", "brown", "black", "spotted"};
  if (this->mother == NULL) {
    int odds = rand() % 4;
    for (int i = 0; i < 4; ++i) {
      if (odds == i) {
        this->color = colors[i];
      }
    }
  } else {
    this->color = this->mother->color;  
  }
}

// sets the age of the Bunny
void Bunny::set_age() {
  this->age = 0;
}

// sets the name of the Bunny
void Bunny::set_name() {
  std::string names[] = {"Bob", "John", "Gary", "Ash", "Silva", "Cooch"};
  int odds = rand() % 5;
  for(int i = 0; i < 6; ++i) {
    if (odds == i) {
      this->name = names[i];
    }
  }
}

// sets radioactive_mutant_vampire_bunny
void Bunny::set_radioactive_mutant_vampire_bunny() {
  double odds = (double)rand() / RAND_MAX;
  if (odds <= 0.02) { // 2% probability
    this->radioactive_mutant_vampire_bunny = true;
  } else {
    this->radioactive_mutant_vampire_bunny = false;
  }
}
