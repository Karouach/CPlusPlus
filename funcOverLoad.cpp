//
// Created by karou on 26/09/2015.
//

#include <cstdio>
using namespace std;

// Cube Volume
double volume( double a ) {
    printf("cube of %f\n", a);
    return a * a * a;
}

// Cylinder Volume
double volume( double r, double h ) {
    const static double _pi = 3.141592653589793;
    printf("cylinder of %f x %f\n", r, h);
    return _pi * r * r * h;
}

// Cuboid Volume
double volume( double a, double b, double c ) {
    printf("cuboid of %f x %f x %f\n", a, b, c);
    return a * b * c;
}

int main( int argc, char ** argv ) {
    printf("volume of a 2 x 2 x 2 cube: %f\n", volume(2.0));
    printf("volume of a cylinder, radius 2, height 2: %f\n", volume(2.0, 2.0));
    printf("volume of a 2 x 3 x 4 cuboid: %f\n", volume(2.0, 3.0, 4.0));
    return 0;
}



