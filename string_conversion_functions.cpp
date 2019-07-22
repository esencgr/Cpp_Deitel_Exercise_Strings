/*
conversion from string to integer and double and ..
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){

    double d = atof(" 99.0 ");
    cout << " \"99.0\" string is conversion double type that " << d << endl;

    int i = atoi(" 2356 ");
    cout << " \"2356\" string is conversion double type that " << i << endl;

    long l = atol(" 10000000 ");
    cout << " \"10000000\" string is conversion double type that " << l << endl << endl;

    const char *str1 = "51.2?***";
    char *extra_ptr1;
    double x = strtod( str1, &extra_ptr1 );
    cout << "original string : " << str1 << endl;
    cout << "long int value  : " << x << endl;
    cout << "extra string    : " << extra_ptr1 << endl << endl;

    const char *str2 = "1234567acbf";
    char * extra_ptr2;
    long y = strtol( str2, &extra_ptr2, 0 );
    cout << "original string : " << str2 << endl;
    cout << "long int value  : " << y << endl;
    cout << "extra string    : " << extra_ptr2 << endl << endl;

    const char *str3 = "-1234567acbf";
    char * extra_ptr3;
    unsigned long z = strtoul( str3, &extra_ptr3, 0 );
    cout << "original string : " << str3 << endl;
    cout << "long int value  : " << z << endl;
    cout << "extra string    : " << extra_ptr3 << endl;

    return 0;
}
