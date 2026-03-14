#include "board.h"
#include "piece.h"

int main(void) {
  struct FC_State state;
  init_board(&state);
  set_piece(&state, g3, (struct FC_Piece){.side = WHITE, .type = ROOK});
  print_board(&state);
  return 0;
}
