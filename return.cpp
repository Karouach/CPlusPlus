//
// Created by karou on 26/09/2015.
//

#include <cstdio>
#include <string>

using namespace std;
const string  & func(){
    static string s = "This is a static string";
    return s;
}
int main(int argc, char ** argv){
    puts("this is main ()");
    printf("returned value s is %s\n", func().c_str());
    return 0;
}




