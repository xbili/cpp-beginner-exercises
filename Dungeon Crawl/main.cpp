#include <iostream>

int main() {
  bool finish;
  char dungeon_grid[7][10];

  // instructions
  std::cout << "Navigate through the dungeon!" << std::endl;
  std::cout << "W: Up" << std::endl;
  std::cout << "A: Left" << std::endl;
  std::cout << "S: Down" << std::endl;
  std::cout << "D: Right" << std::endl;
  std::cout << "\n\n\n" << std::endl;

  // initialize the dungeon grid
  for(int i = 0; i < 7; ++i) {
    for(int j = 0; j < 10; ++j) {
      dungeon_grid[i][j] = '.';
    }
  }

  // insert the enemies
  dungeon_grid[0][2] = 'X';
  dungeon_grid[1][5] = 'X';
  dungeon_grid[2][9] = 'X';
  dungeon_grid[3][1] = 'X';
  dungeon_grid[4][2] = 'X';
  dungeon_grid[5][6] = 'X';
  dungeon_grid[6][3] = 'X';

  // insert you!
  dungeon_grid[0][0] = 'T';

  // insert end point!
  dungeon_grid[6][9] = '0'; 

  // print out the grid
  for(int i = 0; i < 7; ++i) {
    for(int j = 0; j < 10; ++j) {
      std::cout << dungeon_grid[i][j];
    }
    std::cout << std::endl;
  }
  
  // variable for user's choice
  char choice;
    
  // booleans to determine end of while-loop
  bool end_game = false;
  bool dead = false;

  // position of player
  int pos_y = 0;
  int pos_x = 0;

  while(!end_game || !dead) {
    // user input choice
    std::cin >> choice;

    if(choice == 'w') {
      if(pos_y == 0) {
        std::cout << "You cannot go up anymore!" << std::endl;  
      } else if (dungeon_grid[pos_y - 1][pos_x] == 'X') {
        std::cout << "You're dead!" << std::endl;
        dead = true;
      } else {
        dungeon_grid[pos_y][pos_x] = '.';
        dungeon_grid[pos_y - 1][pos_x] = 'T';
        pos_y -= 1;
      }
    } else if(choice == 'a') {
      if(pos_x == 0) {
        std::cout << "You cannot go left anymore!" << std::endl;
      } else if (dungeon_grid[pos_y][pos_x - 1] == 'X') {
        std::cout << "You're dead!" << std::endl;
        dead = true;
      } else {
        dungeon_grid[pos_y][pos_x] = '.';
        dungeon_grid[pos_y][pos_x - 1] = 'T';
        pos_x -= 1;
      }
    } else if(choice == 's') {
      if(pos_y == 6) {
        std::cout << "You cannot go down anymore!" << std::endl;
      } else if (dungeon_grid[pos_y + 1][pos_x] == 'X') {
        std::cout << "You're dead!" << std::endl;
        dead = true;
      } else {
        dungeon_grid[pos_y][pos_x] = '.';
        dungeon_grid[pos_y + 1][pos_x] = 'T';
        pos_y += 1;
      }
    } else if(choice == 'd') {
      if(pos_x == 9) {
        std::cout << "You cannot go right anymore!" << std::endl;
      } else if (dungeon_grid[pos_y][pos_x + 1] == 'X') {
        std::cout << "You're dead!" << std::endl;
        dead = true;
      } else {
        dungeon_grid[pos_y][pos_x] = '.';
        dungeon_grid[pos_y][pos_x + 1] = 'T';
        pos_x += 1; 
      }
    } else {
      std::cout << "Input something useful!" << std::endl;
    }

    // print out the grid... (i could have used functions but the qns assumed i didn't know functions)
    for(int i = 0; i < 7; ++i) {
      for(int j = 0; j < 10; ++j) {
        std::cout << dungeon_grid[i][j];
      }
      std::cout << std::endl;
    }
    
    if(dungeon_grid[6][9] == 'T') {
      std::cout << "You win the game!!" << std::endl;
      end_game = true;
    }
  }
  
  return 0;
}
