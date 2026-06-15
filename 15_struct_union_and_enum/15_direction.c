enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void)
{
    int x, y;

    switch (direction) {
        case EAST:
            x += 1;
        case  WEST:
            x -= 1;
        case SOUTH:
            y += 1;
        case NORTH:
            y -= 1;
    }

    return 0;
}
