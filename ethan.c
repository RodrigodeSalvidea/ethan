#include <ethan.h>







float evaluate_position(struct Board* board){

}
char* getMoves(struct Board *board, int piece){

}
bool is_mate(struct Board *board){

}
bool is_check(struct Board *board){

}
bool is_stalemate(struct Board *board){

}
int attacks(struct Board *board, Position *position){
  char piece = board -> board[position->x][position->y];
  case WHITE KING:
  case WHITE QUEEN:
  case WHITE PAWN:
  case WHITE KNIGHT:
  case WHITE BISHOP:
  case WHITE ROOK:

  case BLACK KING:
  case BLACK QUEEN:
  case BLACK PAWN:
  case BLACK KNIGHT:
  case BLACK BISHOP:
  case BLACK ROOK;
}
struct Board*  makeBoard(){
    struct Board *board = (struct Board*) malloc(sizeof(struct Board));
    for (int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            board ->board[i][j] = 0;
        }
    }
    return board;
}





