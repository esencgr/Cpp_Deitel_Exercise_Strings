/*
conversion from string to integer and double and ..
double atof( const char *nPtr ) ;
      Converts the string nPtr to double.
int atoi( const char *nPtr ) ;
      Converts the string nPtr to int.
long atol( const char *nPtr ) ;
      Converts the string nPtr to long int.
double strtod( const char *nPtr, char **endPtr );
      Converts the string nPtr to double.
long strtol( const char *nPtr, char **endPtr, int base );
      Converts the string nPtr to long.
unsigned long strtoul( const char *nPtr, char **endPtr, int base );
      Converts the string nPtr to unsigned long
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

 

    const char *str3 = "-1234567acbf";
    char * extra_ptr3;
    unsigned long z = strtoul( str3, &extra_ptr3, 0 );
    cout << "original string : " << str3 << endl;
    cout << "long int value  : " << z << endl;
    cout << "extra string    : " << extra_ptr3 << endl;

    return 0;
}
