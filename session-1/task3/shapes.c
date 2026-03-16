
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions

    Point origin = {0.0f, 0.0f};

    Rectangle square = makeRectangle(origin, 2.0f, 2.0f);

    
    scaleRectangle(square, 2);

    printf("x: %f, y: %f\n", square.d.x, square.d.y);
    
    //printf("%f\n", area(square));
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r;

    r.a = p;

    r.b.x = p.x;
    r.b.y = p.y + height;

    r.c.x = p.x + width;
    r.c.y = r.b.y;

    r.d.x = r.c.x;
    r.d.y = p.y;

    return r;
}

float area( Rectangle r ) {
    return (r.d.x - r.a.x) * (r.b.y - r.a.y);
}

void shiftRectangle( Rectangle *r, Point dp ) {

    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->a.x *= scale;
    r->a.y *= scale; 

    r->b.x *= scale;
    r->b.y *= scale;

    r->c.x *= scale;
    r->c.y *= scale;

    r->d.x *= scale;
    r->d.y *= scale;
    return;
}
