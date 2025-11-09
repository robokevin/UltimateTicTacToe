#ifndef GAME_H
#define GAME_H

// Should the game be a struct or a class?
// Should the game have some functions?
// Should the game be able to modify itself?
// Well, I guess it should be able to display itself, so yes.
// Maybe I should make another class for containing the rules of the game,
// then one for game in the sense of computer game.

class Game
{
  private:

  class Board game_board;
  

  public:

  Game(struct Piece *player_one, struct Piece *player_two);
  void display();

};

#endif