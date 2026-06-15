#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

int get_valid_color(int color_value)
{
    if(color_value < 0)
        return 0;
    if(color_value > 255)
        return 255;
    return color_value;
}

/* (a) solution */

struct color make_color(int red, int green, int blue)
{
    struct color valid_color;

    valid_color.red = get_valid_color(red);
    valid_color.green = get_valid_color(green);
    valid_color.blue = get_valid_color(blue);

    return valid_color;
}

/* (b) solution */

int getRed(struct color c)
{
    return c.red;
}

/* (c) solution */
bool equal_color(struct color color1, struct color color2)
{
    if(color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
        return true;

    return false;
}

int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}


/* (d) solution */
struct color color_brighter(struct color c)
{
    struct color brighter_color;

    if(c.red == 0 && c.blue == 0 && c.green == 0){
        brighter_color.red = 3;
        brighter_color.green = 3;
        brighter_color.blue = 3;
        return brighter_color;
    }

    if(c.red < 3) c.red = 3;
    if(c.blue < 3) c.blue = 3;
    if(c.green < 3) c.green = 3;

    brighter_color.red = min(255, c.red / 0.7);
    brighter_color.green = min(255, c.green / 0.7);
    brighter_color.blue = min(255, c.green / 0.6);

    return brighter_color;
}

struct color darker(struct color c)
{
    struct color darker_color;

    darker_color.red = (int)(c.red * 0.7);
    darker_color.green = (int)(c.green * 0.7);
    darker_color.blue = (int)(c.blue * 0.7);

    return darker_color;
}
