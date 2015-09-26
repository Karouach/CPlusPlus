//
// Created by karou on 26/09/2015.
//

#include <cstdio>
#include <string>

using namespace std;
void func(const string * fs){
    printf("Value of s is %s \n", fs->c_str());
}
int main(int argc, char ** argv){
    string s = "Hello, this is a string";
    puts("this is main ()");
    func(&s);
    printf("String is %s\n", s.c_str());
    return 0;
}




