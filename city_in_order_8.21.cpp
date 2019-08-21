/* compare string functions. strcmp, strncmp
Use the string comparison functions discussed in Section 5.12.2 and the techniques for sorting arrays developed
in Chapter 4 to write a program that alphabetizes a list of strings. Use the names of 10 or 15 towns in your
area as data for your program.
*/
#include <iostream>
#include <stdlib.h>
#include <cstring>
#define SIZE 50
using namespace std;

void bubbleSort( char [][ SIZE ] );

int main(){

    char cities[ 10 ][ SIZE ];

    cout << "Enter cities : " << endl;
    for ( int i = 0; i < 10; i++ )
        cin >> &cities[ i ][ 0 ];

    cout << "\nThe cities are : " << endl;
    for ( int i = 0; i < 10; i++ )
        cout << &cities[ i ][ 0 ] << endl;

    bubbleSort( cities );
    cout << "\nThe cities are ordered : " << endl;
    for ( int i = 0; i < 10; i++ )
        cout << &cities[ i ][ 0 ] << endl;

    return 0;
}

void bubbleSort( char a[][ SIZE ] ){
char temp[ SIZE ];
    for ( int i = 0; i <= 8; ++i ){
        for ( int j = 0; j <= 8; ++j ){
            if ( strcmp( &a[ j ][ 0 ], &a[ j + 1 ][ 0 ] ) > 0 ) {
                strcpy( temp, &a[ j ][ 0 ] );
                strcpy( &a[ j ][ 0 ], &a[ j + 1 ][ 0 ] );
                strcpy(&a[ j + 1 ][ 0 ], temp );
            }
        }
    }
}
