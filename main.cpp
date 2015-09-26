//
// Created by karou on 26/09/2015.
//

#include <iostream>
#include <stdio.h>

using namespace std;

void f (int a){
    a++;
}
int main(int argc, char **argv) {
    int a = 5;
    f(a);
    printf("a is %d \n", a);
    return 0;
}

