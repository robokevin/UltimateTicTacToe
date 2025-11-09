#include <cassert>
#include <string_view>

#include "constants.h"
#include "bitboard.h" 


__uint128_t hi{123};

Bitboard::Bitboard()
{
  // The bitboards represent rows where bit zero represents the bottom left.
  // The first 27 bits represent a piece.
  unsigned int bottom_bitboard { 0 };
  unsigned int middle_bitboard { 0 };
  unsigned int top_bitboard { 0 };

}

// OKDN stands for One-Sided Kevin Dang Notation
// Is represented similarly to FEN Notation where pieces are represented with a character
// With rows separated by "/".
// One sided means only one piece's information is represented.
Bitboard::Bitboard(std::string_view OKDN)
{
  // Future plans for entering a starting position. Like a FEN string in chess.
  unsigned int bottom_bitboard { 0 };
  unsigned int middle_bitboard { 0 };
  unsigned int top_bitboard { 0 };
}

bool Bitboard::get_square(int position)
{ 
  // An int from 0 to 80 represents the position.Left to right, top down.
  // 0 -> 8 on the top row, 72 -> 80 on the bottom row.
  assert(position >= 0 && position < BitboardConstants::bottomHighestIndex);

  if(position < BitboardConstants::topHighestIndex)
  {
    return static_cast<bool>(top_bitboard & 1 << position);
  }
  else if(position < BitboardConstants::middleHighestIndex)
  {
    return static_cast<bool>(middle_bitboard & 1 << position - BitboardConstants::topHighestIndex);
  }
  
  return static_cast<bool>(bottom_bitboard & 1 << position - BitboardConstants::middleHighestIndex);
}

void Bitboard::place_piece(int position)
{
  assert(position >= 0 || position < BitboardConstants::bottomHighestIndex);

  if(position < BitboardConstants::topHighestIndex){
    top_bitboard |= (1 << position);
  }
  else if(position < BitboardConstants::middleHighestIndex){
    middle_bitboard |= (1 << (position - BitboardConstants::topHighestIndex));
  }
  else{
    bottom_bitboard |= (1 << (position - BitboardConstants::middleHighestIndex));
  }
}
