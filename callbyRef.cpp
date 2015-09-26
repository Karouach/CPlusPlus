//
// Created by karou on 26/09/2015.
//

#include <iostream>
#include <stdio.h>

using namespace std;

void f (int *p){
    ++(*p);
}
int main(int argc, char **argv) {
    int a = 1;
    f(&a);
    printf("a is %d \n", a);
    return 0;
}

