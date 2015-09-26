//
// Created by karou on 26/09/2015.
//

#include <cstdio>
#include <string>

using namespace std;
void func(){
    static string s = "This is a static string";
}
int main(int argc, char ** argv){
    void (*fp)() = func;
    puts("this is main ()");
    fp();
    return 0;
}




