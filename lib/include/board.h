#ifndef H_BOARD
#define H_BOARD

#include "piece.h"

struct FC_State {
  struct FC_Piece contents[h8 + 1];
};

void init_board(struct FC_State *state);

struct FC_Piece get_piece(struct FC_State *state, enum FC_Position pos);
void set_piece(struct FC_State *state, enum FC_Position pos, struct FC_Piece set);

void print_board(struct FC_State *state);

#endif
