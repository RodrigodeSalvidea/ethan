#include <stdio.h>

#define KING 1
#define QUEEN 2
#define ROOK 3
#define KNIGHT 4
#define BISHOP 5
#define PAWN 6

struct Board{
  char[8][8] board;
}

char *get_moves(struct Board *board, int piece);

int evaluate_move(struct Board *board, int piece);

bool is_mate(struct Board *board);
bool is_check(struct Board *board);
bool is_stalemate(struct Board *board);















