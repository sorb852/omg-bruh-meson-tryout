#include "board.h"
#include "piece.h"
#include <stdio.h>

void init_board(struct FC_State *state) {
  for (int i = a1; i <= h8; i++)
    state->contents[i] = (struct FC_Piece){.side = NEUTRAL, .type = EMPTY};
}

struct FC_Piece get_piece(struct FC_State *state, enum FC_Position pos) {
  return state->contents[pos];
}
void set_piece(struct FC_State *state, enum FC_Position pos,
               struct FC_Piece set) {
  state->contents[pos] = set;
}

void print_board(struct FC_State *state) {
  for (int i = a1; i <= h8; i++) {
    printf("%c", get_piece_char(state->contents[i]));
    if (i % 8 == 7) {
      printf("\n");
    }
  }
}
