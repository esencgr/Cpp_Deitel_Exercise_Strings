/*
Write a program that reads a series of strings and prints only those strings beginning with the letter “b”.
*/
#include <iostream>
#include <stdlib.h>
#include <cstring>
#define SIZE1 5
#define SIZE2 20
using namespace std;

int main(){

    char cities[ SIZE1 ][ SIZE2 ];

    cout << "Enter cities : " << endl;
    for ( int i = 0; i < SIZE1; i++ )
        // cin.getline( &cities[ i ][ 0 ], SIZE2 );
        cin >> &cities[ i ][ 0 ];

    cout << "\nThe cities are : " << endl;
    for ( int i = 0; i < SIZE1; i++ )
        cout << &cities[ i ][ 0 ] << endl;

    cout << "\nThe cities of started with b : " << endl;
    for ( int i = 0; i < SIZE1; i++ )
        if ( cities[ i ][ 0 ] == 'b')
            cout << &cities[ i ][ 0 ] << endl;

    return 0;
}
void
