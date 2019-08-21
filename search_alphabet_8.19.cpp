/*
Write a program based on the program of Exercise 8.16 that inputs several lines of text and a search
string, and uses function strstr to determine the total number of occurrences of the string in the
lines of text. Print the result.
*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
#define SIZE 80
#define SIZE1 26

int main( ){

    char text[ 3 ][ SIZE ], *search_ptr;
    int characters[ SIZE1 ], count = 0;
    cout << "Enter a line of text: ";
    for ( int i = 0; i < 3; i++ ){
        cin.getline( &text[ i ][ 0 ], SIZE );
    }

    // make all characters lowercase
    for ( int i = 0; i < 2; i++ ){
         for ( int j = 0; text[ i ][ j ] != '\0'; j++ ){
             char c = (char)( tolower( text[ i ][ j ] ));
             text[ i ][ j ] = c;
         }
    }

    for ( int i = 0; i < SIZE1 ; i++ ){
        count = 0;
        for ( int j = 0; j < 3; j++ ){
            search_ptr = &text[ j ][ 0 ];
            while ( search_ptr = strchr( search_ptr, 'a' + i )){
                count++;
                search_ptr++;
            }
        }
        characters[ i ] = count;
    }

    cout << "\nThe total occurrences of each character:\n";
    for ( int w = 0; w < SIZE1; ++w )
        cout << setw( 3 ) << (char)( 'a' + w ) << ':' << setw( 3 )
             << characters[ w ] << '\n';

    return 0;
}
