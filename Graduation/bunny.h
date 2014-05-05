#ifndef BUNNY_H_
#define BUNNY_H_

class Bunny {
public:
  Bunny();
  ~Bunny();
  void display_info();
  void set_sex();
  void set_color();
  void set_age();
  void set_name();
  void set_radioactive_mutant_vampire_bunny();
private:
  int age;
  std::string name;
  std::string color;
  std::string sex;
  bool radioactive_mutant_vampire_bunny;
  Bunny* mother;
};

#endif
