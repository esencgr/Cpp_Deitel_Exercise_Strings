/*
(Text Analysis) The availability of computers with string manipulation capabilities has resulted in some rather
interesting approaches to analyzing the writings of great authors. Much attention has been focused on whether
William Shakespeare ever lived.
Some scholars believe there is substantial evidence indicating that Christopher Marlowe or other authors actual
ly penned the masterpieces attributed to Shakespeare. Researchers have used computers to find similarities in
the writings of these two authors.This exercise examines three methods for analyzing texts with a computer.
      b) Write a program that reads several lines of text and prints a table indicating the number of one-letter words, two-letter
         words, three-letter words, etc., appearing in the text. For example, the phrase:

                Whether 'tis nobler in the mind to suffer

         contains length of that words length 2 -> 2 ,
*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
#define SIZE 80
#define SIZE1 20
#define ROW 1

int main( ){

    char text[ ROW ][ SIZE ], *search_ptr;
    int lengths[ SIZE1 ] = { 0 }, count = 0;

    cout << "Enter 3 line of text: ";
    for ( int i = 0; i < ROW; i++ )
        cin.getline( &text[ i ][ 0 ], SIZE );


    // make all character lowercase
    for ( int i = 0; i < 2; i++ ){
         for ( int j = 0; text[ i ][ j ] != '\0'; j++ ){
             char c = (char)( tolower( text[ i ][ j ] ));
             text[ i ][ j ] = c;
         }
    }

    for ( int i = 0; i < ROW ; i++ ){
        search_ptr = strtok( &text[ i ][ 0 ], ". \n" );
        while ( search_ptr ){
            ++lengths[ strlen ( search_ptr )];
            search_ptr = strtok( 0, ". \n") ;
        }
    }

    cout << "\nThe total lenghts of each words:\n";
    for ( int w = 0; w < 19; ++w )
        if ( lengths[ w ] )
            cout << lengths[ w ]  << " -> word(s) of length -> " << w << endl;
    return 0;
}
