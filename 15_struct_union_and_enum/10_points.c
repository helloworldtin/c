#include <stdbool.h>

struct point {int x, y;};
struct rectangle {struct point upper_left; struct point lower_right;};


/* (a): solution */
int calculate_rectangle_area(struct rectangle r)
{
    int height,width;

    width = (r.lower_right.x - r.upper_left.x);
    height = (r.upper_left.y - r.lower_right.y);
    return height * width;
}

/* (b): solution */
struct point find_rect_center(struct rectangle r)
{
    struct point center;
    center.x = (r.upper_left.x + r.lower_right.x) / 2;
    center.y = (r.upper_left.y + r.lower_right.y) / 2;

    return center;
}

/*(c): solution */
struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
    struct rectangle displaced_rectangle;

    displaced_rectangle = r;

    displaced_rectangle.upper_left.x += x;
    displaced_rectangle.lower_right.x += x;

    displaced_rectangle.upper_left.y += y;
    displaced_rectangle.lower_right.y += y;

    return displaced_rectangle;

}
/* (d): solution */
bool does_point_lie(struct rectangle r, struct point p){
    int x = p.x, y = p.y;

    if(x >= r.upper_left.x && x <= r.lower_right.x && y >= r.lower_right.y && y <= r.upper_left.y)
        return true;

    return false;
}
