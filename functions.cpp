#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 
 
void print(std::vector<char> grid){ 
  for (int i = 0; i < 3; i++){ 
    std::cout << grid[i*3] << "|" << grid[i*3+1] << "|" << grid[i*3+2] << "\n"; 
  } 
} 
 
std::vector<char> place_move(std::vector<char> grid, int move, char mark){ 
  while (move < 1 || move > 9 || grid[move-1] != '_'){ 
      std::cout << "Enter a number between 1 and 9: "; 
      std::cin >> move; 
      if (grid[move-1] == 'X' || grid[move-1] == 'Y'){
        std::cout << "That spot is already taken! Make another move\n";
      }
    } 
    grid[move-1] = mark; 
    return grid;
} 
 
bool check_win(std::vector<char> grid, char mark){ 
  for (int i = 0; i < 3; i++){ 
    if (grid[i*3] == mark && grid[i*3+1] == mark && grid[i*3+2] == mark) return true; 
 
    else if (grid[i] == mark && grid[i+3] == mark && grid[i+6] == mark) return true; 
  } 
  if (grid[0] == mark && grid[4] == mark && grid[8] == mark) return true; 
  else if (grid[2] == mark && grid[4] == mark && grid[6] == mark) return true; 
   
  return false; 
 }