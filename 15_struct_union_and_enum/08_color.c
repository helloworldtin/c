struct color{
    int red;
    int green;
    int blue;
};

int main(void)
{
    // a (solution)
    const struct color MAGENTA = {255,0,255};

    // b (solution)
    const struct color MAGENTA_2 = {.red = 255, .blue = 255};

    return 0;
}
