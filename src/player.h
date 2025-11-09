#ifndef PLAYER_H
#define PLAYER_H

class Player
{
  private:

  char piece_displayed;
  bool is_moving_first;

  public:

  Player(char character);
  void change_piece_displayed(char character);

};

#endif