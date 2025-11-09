#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
  private:

  Board *current_board;
  Board *search_board;

  public:

  Engine(Board *board);
  int get_best_move(class Board *board, struct Player *player_to_move);

};

#endif