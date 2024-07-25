#include <iostream>
#include <vector>
#include <string>

void print(std::vector<char> grid);
std::vector<char> place_move(std::vector<char> grid, int move, char mark);
bool check_win(std::vector<char> grid, char mark);