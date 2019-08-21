/*
Write a program that inputs a line of text, tokenizes the line with function strtok and outputs the tokens in reverse order.
*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
#define SIZE 80

void number_of_words( char * );

int main( ){

    char text[ SIZE ], *temp;
    int count = 0;

    cout << "Enter a line of text : ";
    cin.getline( text,  SIZE );
    number_of_words( text );

    return 0;
}
void number_of_words( char *text ){
     char *temp, *text_ptr[ SIZE ];
     int count = 0;
     temp = strtok( text, " " );
         for ( int i = 0; i < SIZE; i++ ){
             while ( temp ){
                 text_ptr[ count++ ]= temp;
                 temp = strtok( 0, " " );
             }

         }
     cout <<"The words in reverse order : ";
     for ( int i = count - 1; i >= 0; i-- ){
         cout << text_ptr[ i ] << " ";
     }

     cout << "\nTotal words of this line : " << count << endl;
}
