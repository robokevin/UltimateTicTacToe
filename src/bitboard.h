#ifndef BITBOARD_H
#define BITBOARD_H

class Bitboard
{
  private:

  unsigned int bottom_bitboard;
  unsigned int middle_bitboard;
  unsigned int top_bitboard;

  public:

  Bitboard();
  Bitboard(std::string_view OKDN);

  bool get_square(int position);
  void place_piece(int position);

};



#endif