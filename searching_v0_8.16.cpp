/*
Write a program based on the program of Exercise 8.16 that inputs several lines of text and a search
string, and uses function strstr to determine the total number of occurrences of the string in the
lines of text. Print the result.
*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
#define SIZE 20

int main( ){

    char text[ 3 ][ SIZE ], search[ SIZE ], *search_ptr;
    int count=0;

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

    cout << "Enter a text for search: ";
    cin >> search;

    for ( int i = 0; i < 3; i++ ){
        search_ptr = &text[ i ][ 0 ];
        while ( search_ptr = strstr( search_ptr, search )){
             count++;
             search_ptr++;
        }
    }

    cout << "\nThe total occurrences of \"" << search << "\" in the text is:"
         << setw( 3 ) << count << endl;

    return 0;
}
// ++search_ptr = strstr( &text[ i ][ 0 ], search );
// if ( search_ptr )
//     count++;
//
// search_ptr = 0;
