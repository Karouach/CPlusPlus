//
// Created by karou on 26/09/2015.
//

#include <cstdio>
#include <cstdarg>

// first argument is int count & ... remaining args
double average(const int count, ...)
{
   //Macro
    va_list ap;
    int i;
    double total = 0.0;
    va_start(ap, count);
    for(i = 0; i < count; ++i) {
        total += va_arg(ap, double);
    }
    va_end(ap);
    return total / count;
}
int message(const char * fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int rc = vfprintf(stdout, fmt, ap);
    puts("");
    va_end(ap);
    return rc;
}
int main( int argc, char ** argv ) {
    message("This is a message");
    message("Average: %f", average(5, 25.0, 35.7, 50.1, 127.6, 75.0));
    return 0;
}



