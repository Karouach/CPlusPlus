//
// Created by karou on 26/09/2015.
//

#include <cstdio>

using namespace std;
void func(int i){
    printf("Value of i is %d \n", i);
}
void fun2(int &i){
    i = 73;
    printf("value is %d\n", i);
}
int main(int argc, char ** argv){
    int x = 43;
    puts("this is main ()");
    func(42);
    fun2(x);
    x= 73;
    printf("x is %d\n", x);
    return 0;
}




