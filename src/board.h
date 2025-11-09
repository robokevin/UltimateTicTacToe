#ifndef BOARD_H
#define BOARD_H

#include <string_view>

#include "bitboard.h"

class Board
{ 
  private:

  class Bitboard player_one_bitboard;
  class Bitboard player_two_bitboard;

  unsigned int main_board_x;
  unsigned int main_board_o;

  void check_square_and_print(int index);

  public:

  Board();
  Board(std::string_view KDN);
  void display();
  void place_piece();

};

#endif