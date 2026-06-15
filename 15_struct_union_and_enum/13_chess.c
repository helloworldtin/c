/* (a) solution */
typedef enum {PAWN, KNIGHT ,BISHOP, ROOK, QUEEN, KING, EMPTY} Piece;
typedef  enum {BLACK, WHITE} Color ;

/* (b) solution */
typedef  struct {
    Piece piece;
    Color color;
} Square;


int main(void)
{
    /* (c) and (d) solution */
    Square board[8][8] = {
        /* Top of the board */
        {
            {ROOK, BLACK},
            {KING, BLACK},
            {BISHOP, BLACK},
            {QUEEN, BLACK},
            {KING, BLACK},
            {BISHOP, BLACK},
            {KING, BLACK},
            {ROOK, BLACK},
        },
        {
            {PAWN, BLACK},
            {PAWN, BLACK},
            {PAWN, BLACK},
            {PAWN, BLACK},
            {PAWN, BLACK},
            {PAWN, BLACK},
            {PAWN, BLACK},
            {PAWN, BLACK},

        },
        /* empty part */
        {
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
        },

        {
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
        },

        {
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
        },

        {
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
            {EMPTY, BLACK},
        },

        /* Empty part end */

        /* Down of the board */
        {
            {PAWN, WHITE},
            {PAWN, WHITE},
            {PAWN, WHITE},
            {PAWN, WHITE},
            {PAWN, WHITE},
            {PAWN, WHITE},
            {PAWN, WHITE},
            {PAWN, WHITE},
        },

        {
            {ROOK, WHITE},
            {KING, WHITE},
            {BISHOP, WHITE},
            {QUEEN, WHITE},
            {KING, WHITE},
            {BISHOP, WHITE},
            {KING, WHITE},
            {ROOK, WHITE},
        }
    };
    return 0;
}
