// Using of string processing functions. strcpy, strncpy, strcat, strncat
/*
char *strcpy( char *s1, const char *s2 )
            Copies string s2 into array s1. The value of s1 is returned.
char *strncpy( char *s1, const char *s2, size_t n )
            Copies at most n characters of string s2 into array s1. The value of s1 is returned.
char *strcat( char *s1, const char *s2 )
            Appends string s2 to array s1. The first character of s2 overwrites the terminating
            null character of s1. The value of s1 is returned.
char *strncat( char *s1, const char *s2, size_t n )
            Appends at most n characters of string s2 to array s1. The first character of s2
            overwrites the terminating null character of s1. The value of s1 is returned.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char x[ ] = "hello world, hello cagri";
    char y[ 25 ], z[ 15 ];

    cout << " x string :" << x << endl;
    cout << " y string :" << strcpy( y, x ) << endl;
    strncpy( z, x, 11 );
    z[ 11 ] = '\0';
    cout << " z string :" << z << endl << endl;

    char a[ ] = "hi ";
    char b[ 25 ], c[ 15 ];
    cout << " name : ";
    cin >> b;
    cout << " a string :" << a << endl;
    cout << " b string :" << strcat( a, b ) << endl;
    cout << " c string :" << strncat( a, b, 6 );

    return 0;
}
