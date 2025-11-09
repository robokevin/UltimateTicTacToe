#include <stdint.h>
#include <cassert>

#include "utils.h"
#include "constants.h"
#include "board.h"



/*
   Board should:
   Allow you to get the piece at one square.
   Modify one square.
   Provide an interface of the bitboards for easy use.
   Be able to load some sort of state from a string? FEN string?
*/


Board::Board()
{

  // The win or loss of the individual small boards is a bit on the large board.
  // Only the first 9 bits are used.
  // Note: modify the bitboard class to take a size.
  class Bitboard player_one_bitboard();

  unsigned int main_board_x { 0 };
  unsigned int main_board_o { 0 };

}


  



