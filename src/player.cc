#include "player.h"


/*
   Player class should:

   Allow you to modify the pieces you are using.
   Contain info about who is moving first.
   
*/

Player::Player(char character)
{
   char piece_displayed { character };
}

void Player::change_piece_displayed(char character)
{
   char piece_displayed {character};
}