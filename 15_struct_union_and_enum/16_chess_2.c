enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};

int main(void)
{
    /* (a) solution */
    const int piece_value[] = {200, 9, 5, 3, 3, 1};

    /* (b) solution */
    const int  piece_value_2[] = {[KING] = 200, [QUEEN] = 9, [ROOK] = 5, [BISHOP] = 3, [KNIGHT] = 3, [PAWN] = 1};
    return 0;
}
