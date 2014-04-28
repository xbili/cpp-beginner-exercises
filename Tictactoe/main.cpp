#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {
  // generate random seed
  srand(time(NULL));

  char unit[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  bool win = false;
  int choice;
  int turn = 0;

  while(win != true) {
    std::cout << " " << unit[0] << " | " << unit[1] << " | " << unit[2] << " " << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << unit[3] << " | " << unit[4] << " | " << unit[5] << " " << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << unit[6] << " | " << unit[7] << " | " << unit[8] << " " << std::endl;

    // player turn
    if(turn % 2 == 0) {
      std::cout << "Player " << (turn % 2) + 1 << std::endl;
      std::cout << "Make your choice." << std::endl;
      std::cin >> choice;
    } else if (turn % 2 == 1) {
      // do-while loop to make sure computer doesn't choose a move that player/itself has taken
      do {
      
        // epic long list of else-if to make a smart computer... Not a very smart way.
        if (unit[0] == unit[1] && unit[0] == 'O') {
          choice = 3; 
        } else if (unit[0] == unit[2] && unit[0] == 'O') {
          choice = 2;
        } else if (unit[1] == unit[2] && unit[1] == 'O') {
          choice = 1;
        } else if (unit[3] == unit[4] && unit[3] == 'O') {
          choice = 6;
        } else if (unit[3] == unit[5] && unit[3] == 'O') {
          choice = 5;
        } else if (unit[4] == unit[5] && unit[4] == 'O') {
          choice = 4;
        } else if (unit[6] == unit[7] && unit[6] == 'O') {
          choice = 9;
        } else if (unit[6] == unit[8] && unit[6] == 'O') {
          choice = 8;
        } else if (unit[7] == unit[8] && unit[7] == 'O') {
          choice = 7;
        } else if (unit[0] == unit[3] && unit[0] == 'O') {
          choice = 7;
        } else if (unit[0] == unit[6] && unit[0] == 'O') {
          choice = 4;
        } else if (unit[3] == unit[6] && unit[3] == 'O') {
          choice = 1;
        } else if (unit[1] == unit[4] && unit[1] == 'O') {
          choice = 8;
        } else if (unit[1] == unit[7] && unit[1] == 'O') {
          choice = 5;
        } else if (unit[4] == unit[7] && unit[4] == 'O') {
          choice = 2;
        } else if (unit[2] == unit[5] && unit[2] == 'O') {
          choice = 9;
        } else if (unit[2] == unit[8] && unit[2] == 'O') {
          choice = 6;
        } else if (unit[5] == unit[8] && unit[5] == 'O') {
          choice = 3;
        } else if (unit[0] == unit[4] && unit[0] == 'O') {
          choice = 9;
        } else if (unit[0] == unit[8] && unit[0] == 'O') {
          choice = 5;
        } else if (unit[4] == unit[8] && unit[4] == 'O') {
          choice = 1;
        } else if (unit[2] == unit[4] && unit[2] == 'O') {
          choice = 7;
        } else if (unit[2] == unit[6] && unit[2] == 'O') {
          choice = 5;
        } else if (unit[4] == unit[6] && unit[4] == 'O') {
          choice = 3;
        } else {
          choice = rand() % 9 + 1;
        }
      } while(unit[choice-1] == 'O' || unit[choice-1] == 'X');

      // announce computer's move      
      std::cout << "Computer chose to move " << choice << std::endl;
    } 

    // check for turn
    if (turn % 2 == 0) {
      unit[choice - 1] = 'O';
    } else if (turn % 2 != 0) {
      unit[choice - 1] = 'X';
    }

    // check for win
    if ((unit[0] == unit[1] && unit[1] == unit[2]) ||
        (unit[3] == unit[4] && unit[4] == unit[5]) ||
        (unit[6] == unit[7] && unit[7] == unit[8]) ||
        (unit[0] == unit[3] && unit[3] == unit[6]) ||
        (unit[1] == unit[4] && unit[4] == unit[7]) ||
        (unit[2] == unit[5] && unit[5] == unit[8]) ||
        (unit[0] == unit[4] && unit[4] == unit[8]) ||
        (unit[2] == unit[4] && unit[4] == unit[6])) {

      // print out grid once more
      std::cout << " " << unit[0] << " | " << unit[1] << " | " << unit[2] << " " << std::endl;
      std::cout << "---|---|---" << std::endl;
      std::cout << " " << unit[3] << " | " << unit[4] << " | " << unit[5] << " " << std::endl;
      std::cout << "---|---|---" << std::endl;
      std::cout << " " << unit[6] << " | " << unit[7] << " | " << unit[8] << " " << std::endl;

      // annouce winner
      std::cout << "Player " << (turn % 2) + 1 << " wins!" << std::endl;
      win = true; // end the while-loop
    }

    // check for stalemate
    

    // increment turn
    ++turn;  
  }
  return 0;
}
