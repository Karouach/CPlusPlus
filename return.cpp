//
// Created by karou on 26/09/2015.
//

#include <cstdio>

using namespace std;
int  func(int i){

    puts("func()\n");
    return i * 2;
}
int main(int argc, char ** argv){
    puts("this is main ()");
    printf("returned value is %d\n", func(42));
    return 0;
}




