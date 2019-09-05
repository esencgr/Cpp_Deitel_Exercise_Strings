/*
(Text Analysis) The availability of computers with string manipulation capabilities has resulted in some rather
interesting approaches to analyzing the writings of great authors. Much attention has been focused on whether
William Shakespeare ever lived.
Some scholars believe there is substantial evidence indicating that Christopher Marlowe or other authors actual
ly penned the masterpieces attributed to Shakespeare. Researchers have used computers to find similarities in
the writings of these two authors.This exercise examines three methods for analyzing texts with a computer.
      a) Write a program that reads several lines of text from the keyboard and prints a table indicating the
         number of occurrences of each letter of the alphabet in the text. For example, the phrase

              To be, or not to be: that is the question:

         contains one “a,” two “b’s,” no “c’s,” etc.
*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
#define SIZE 80
#define SIZE1 26
#define ROW 3

int main( ){

    char text[ ROW ][ SIZE ], *search_ptr;
    int characters[ SIZE1 ], count = 0;

    cout << "Enter a line of text: ";
    for ( int i = 0; i < ROW; i++ )
        cin.getline( &text[ i ][ 0 ], SIZE );


    // make all characters lowercase
    for ( int i = 0; i < 2; i++ ){
         for ( int j = 0; text[ i ][ j ] != '\0'; j++ ){
             char c = (char)( tolower( text[ i ][ j ] ));
             text[ i ][ j ] = c;
         }
    }

    for ( int i = 0; i < SIZE1 ; i++ ){
        count = 0;
        for ( int j = 0; j < ROW; j++ ){
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
