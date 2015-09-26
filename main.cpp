//
// Created by karou on 26/09/2015.
//

#include <iostream>
#include <stdio.h>

using namespace std;

unsigned long factorial (unsigned long n){
    if(n < 2) return 1;
    return factorial(n -1) * n;
}
int main(int argc, char **argv) {
    for(int i = 0; i < argc; ++i){
        puts(argv[i]);
    }
    factorial(1);
    cout << factorial(1)<<endl;
    return 0;
}