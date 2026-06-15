struct point {
    int x;
    int y;
};

typedef enum {RECTANGLE,CIRCLE} SHAPE;

struct shape {
    SHAPE shape_kind;
    struct point center;

    union{
        struct{
          int height,width;
        } rectangle;

        struct{
            int radius;
        }circle;
    } u;
} s;

int calculate_area_of_shape(struct shape s)
{
    int area;
    if(s.shape_kind == RECTANGLE){
        area = s.u.rectangle.height * s.u.rectangle.width;
    }else{
        int r =  s.u.circle.radius;
        area = 3.14 * r * r;
    }

    return area;
}

struct shape displace_shape(struct shape s, int x, int y)
{
    struct shape displaced_shape;
    displaced_shape.center.x = s.center.x + x;
    displaced_shape.center.y = s.center.y + y;

    return displaced_shape;
}

struct shape scale_shape(struct shape s, double c){
    struct shape scaled_shape = s;
    if(s.shape_kind == RECTANGLE){
        scaled_shape.u.rectangle.height *= c;
        scaled_shape.u.rectangle.width *= c;
    }else{
        scaled_shape.u.circle.radius *= c;
    }
    return scaled_shape;
}
