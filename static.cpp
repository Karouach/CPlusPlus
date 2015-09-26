//
// Created by karou on 26/09/2015.
//

#include <cstdio>

using namespace std;
void func(){
    static int i = 5;
    printf("Value of s is %d \n", ++i);
    i= 40;
    printf("Value of s is %d \n", ++i);
}
int main(int argc, char ** argv){
    puts("this is main ()");
    func();
    func();
    return 0;
}




