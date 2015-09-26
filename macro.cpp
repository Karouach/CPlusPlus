//
// Created by karou on 26/09/2015.
//
#include <cstdio>
using namespace std;

#define MACRO(a , b ) ( a * b )

int main( int argc, char ** argv )
{
    int ia = 5;
    int ib = 7;
    printf("value is %d\n", MACRO (ia ,ib));
    return 0;
}
