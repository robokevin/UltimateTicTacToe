#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace BitboardConstants
{
  // Consts for knowing where each bitboard ends.
  constexpr int rowNumSquares { 9 };
  constexpr int bitboardNumRows { 3 };
  constexpr int bitboardNumSquares { rowNumSquares * bitboardNumRows };
  constexpr int topHighestIndex { bitboardNumSquares };
  constexpr int middleHighestIndex { topHighestIndex + bitboardNumSquares };
  constexpr int bottomHighestIndex { middleHighestIndex + bitboardNumSquares };

}

#endif