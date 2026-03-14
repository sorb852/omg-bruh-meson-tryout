#ifndef H_PIECE
#define H_PIECE

enum FC_Position {
  // clang-format off
  a1, b1, c1, d1, e1, f1, g1, h1,
  a2, b2, c2, d2, e2, f2, g2, h2,
  a3, b3, c3, d3, e3, f3, g3, h3,
  a4, b4, c4, d4, e4, f4, g4, h4,
  a5, b5, c5, d5, e5, f5, g5, h5,
  a6, b6, c6, d6, e6, f6, g6, h6,
  a7, b7, c7, d7, e7, f7, g7, h7,
  a8, b8, c8, d8, e8, f8, g8, h8,
  // clang-format on
};

enum FC_Side { WHITE, BLACK, NEUTRAL };

enum FC_Type { PAWN, BISHOP, KNIGHT, ROOK, QUEEN, KING, EMPTY };

struct FC_Piece {
  enum FC_Side side;
  enum FC_Type type;
};

char get_piece_char(struct FC_Piece piece);

#endif
