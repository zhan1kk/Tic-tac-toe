#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "functions.hpp"

void playGame(){
  std::vector<char> grid(9, '_');
  int player1_move = 0;
  int player2_move = 0;
  int moves = 0;
  
  std::cout << "Tic-tac-toe game. To make a move enter a number between 1 and 9\n";

  print(grid);

  while (moves < 9){
    std::cout << "First player's turn.\n";
    grid = place_move(grid, player1_move, 'X');
    print(grid);
    
    if (check_win(grid, 'X')){
      std::cout << "First player won!\n";
      break;
    }
    moves++;

    if (moves == 9){
      std::cout << "It is a draw!\n";
      break;
    } 
    
    std::cout << "Second player's turn.\n";
    grid = place_move(grid, player2_move, 'O');
    print(grid);

    if (check_win(grid, 'O')){
      std::cout << "Second player won!\n";
      break;
    }
    moves++;
  }
}

int main(){  
  char playAgain = 'y';
  while (playAgain == 'y' || playAgain == 'Y'){
    playGame();

    std::cout << "Type y to play again: ";
    std::cin >> playAgain;
    system("clear");
  }
}
