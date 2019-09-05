/*
Write a program that inputs a line of text, tokenizes the line with function strtok and outputs the tokens in reverse order.
*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
#define SIZE 100
#define ROW 3

void number_of_words( char [][ SIZE ] );

int main( ){

    char text[ ROW ][ SIZE ], *temp;
    int count = 0;

    cout << "Enter three line of text :\n";

    for ( int i = 0; i < ROW; i++)
        cin.getline( &text[ i ][ 0 ], SIZE );

    number_of_words( text );

    return 0;
}

void number_of_words( char text[ ][ SIZE ] ){

     char *temp, text_ptr[ ROW ][ SIZE ], words[ 100 ][ 20 ] = { "" };
     int count[ SIZE ] = { 0 };

     for ( int i = 0; i < SIZE; i++ ){
         temp = strtok( &text[ i ][ 0 ], ". \n" );
         while ( temp ){
             int j;
             for ( j = 0; words[ j ][ 0 ] && strcmp( temp , &words[ j ][ 0 ] ) != 0; j++)
                    ;

             ++count[ j ];

             if ( !words[ j ][ 0] )
                strcpy( &words[ j ][ 0 ], temp );

             temp = strtok( 0, ". \n" );
         }
     }

     for ( int k = 0; words[ k ][ 0 ] != '\0' && k <= 99; k++)
         cout <<  &words[ k ][ 0 ] << " appeared " << count[ k ] << " time(s)" << endl;;


}
