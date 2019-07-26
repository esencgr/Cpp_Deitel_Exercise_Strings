// Using of string processing functions. strcpy, strncpy, strcat, strncat
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
