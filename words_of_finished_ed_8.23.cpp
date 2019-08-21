/*
Write a program that reads a series of strings and prints only those strings that end with the letters “ED”Write
a program that inputs an ASCII code and prints the corresponding character.

Modify this program so that it generates all possible three-digit codes in the range 000 to 255 and attempts to
print the corresponding characters.

What happens when this program is runUsing the ASCII character chart in Appendix B as a guide, write your own
versions of the character handling functions in Fig. 16.16.
*/
#include <iostream>
#include <stdlib.h>
#include <cstring>
#define SIZE1 3
#define SIZE2 20
using namespace std;

void finished_ed( char [][ SIZE2 ] );

int main(){

    char cities[ SIZE1 ][ SIZE2 ];

    cout << "Enter cities : " << endl;
    for ( int i = 0; i < SIZE1; i++ )
         cin.getline( &cities[ i ][ 0 ], SIZE2 );

    // cout << "\nThe cities are : " << endl;
    // for ( int i = 0; i < SIZE1; i++ )
    //     cout << &cities[ i ][ 0 ] << endl;

    cout << "\nThe cities of finished with ED : " << endl;
    finished_ed( cities );

    return 0;
}
void finished_ed( char arr[ SIZE1 ][ SIZE2 ] ){
    int len;
    for ( int i = 0; i < SIZE1; i++ ){
        len = strlen( &arr[ i ][ 0 ] );
        if ( strcmp ( &arr[ i ][ len - 2 ], "ED" ) == 0 )
        // if ( (&arr[ i ][ len - 2 ]) == "ED" )
            cout << &arr[ i ][ 0 ] << endl;
    }
}
