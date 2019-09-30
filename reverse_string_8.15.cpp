/*
(Reverse String)
Write a program that inputs a line of text, tokenizes the line with function strtok and outputs the
tokens in reverse order.
*/
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 80

void reverse( char * const );

int main( ){

    char text[ SIZE ];
    cout << "Enter a line of text:\n";
    cin >> text;

    reverse ( text );
    cout << endl;

    return 0;
}
void reverse( char * const sentence ){
    char *temp, *token_ptr[ SIZE ];
    int count = 0;

    temp = strtok( sentence, " " );

    while ( temp ){
        token_ptr[ count++ ] = temp;
        temp = strtok( 0, " " );
    }

    for ( int i = count - 1; i >= 0 ; i-- )
        cout << token_ptr[ i ] << " ";

}
