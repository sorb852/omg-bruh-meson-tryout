#include "piece.h"

char get_piece_char(struct FC_Piece piece) {
  int offset = piece.side == WHITE ? 0 : 32;
  switch (piece.type) {
  case PAWN:
    return (char)('P' + offset);
  case BISHOP:
    return (char)('B' + offset);
  case KNIGHT:
    return (char)('K' + offset);
  case ROOK:
    return (char)('R' + offset);
  case QUEEN:
    return (char)('Q' + offset);
  case KING:
    return (char)('K' + offset);
  case EMPTY:
    return '.';
  }
  return '?';
}
