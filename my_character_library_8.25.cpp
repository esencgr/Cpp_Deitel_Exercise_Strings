/*
This code includes of letteracter library functions
int isdigit( int c );
    Returns a true value if c is a digit and 0 (false) otherwise.

int isalpha( int c );
    Returns a true value if c is a letter and 0 otherwise.

int isalnum( int c );
    Returns a true value if c is a digit or a letter and 0 otherwise.

int islower( int c );
    Returns a true value if c is a lowercase letter and 0 otherwise.

int isupper( int c );
    Returns a true value if c is an uppercase letter and 0 otherwise.

int tolower( int c );
    If c is an uppercase letter, tolower returns c as a lowercase letter.
    Otherwise, tolower returns the argument unchanged.

int toupper( int c );   If c is a lowercase letter, toupper returns c as an uppercase letter.
                        Otherwise, toupper returns the argument unchanged.

int isspace( int c );   Returns a true value if c is a white-space character—newline
                        ('\n'), space (' '), form feed ('\f'), carriage return ('\r'),
                        horizontal tab ('\t') or vertical tab ('\v')—and 0 otherwise.
*/
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int is_digit( int );
int is_alpha( int );
int is_alnum( int );
int is_lower( int );
int is_upper( int );
int is_space( int );
int is_xpunct( int );
int is_print( int );
int is_graph( int );
int is_tolower( int );
int is_toupper( int );

int main(){

    char c;
    cout << "Enter a character : ";
    cin >> c;

    // is_digit( 'c' ) : c is an integer => 1,  not => 0.
    if ( is_digit( (int)(c) ))
        cout << "This is a integer. " << endl;

    // is_alpha( 'c' ) : c is an letter => 1,  not => 0.
    else if ( is_alpha( (int)(c) ))
        cout << "This is an letter. " << endl;

    // is_alnum( 'c' ) : c is an letter or number => 1,  not => 0.
    if ( is_alnum( (int)(c) ))
        cout << "This is an letter or integer. " << endl;

    // is_lower( 'c' ) : c is an lowercase let => 1,  not => 0.
    if ( is_lower( (int)(c) ))
        cout << "This is a lowercase. " << endl;

    // is_upper( 'c' ) : c is an uppercase => 1,  not => 0.
    if ( is_upper( (int)(c) ))
        cout << "This is an uppercase. " << endl;

    // is_space( 'c' ) == isspace ( 'c' ) : c is an control variable => 1,  not => 0.
    if ( is_space( (int)(c) ))
        cout << "This is an control variable. " << endl;

    // is_xpunct( 'c' ) : c is a punctuation character => 1,  not => 0.
    if ( is_xpunct( (int)(c) ))
        cout << "This is an punctuation character. " << endl;

    // is_graph( 'c' ) : c is a printing char without space char=> 1,  not => 0.
    if ( is_graph( (int)(c) ))
        cout << "This is a printing char without space char. " << endl;

    // is_print( 'c' ) : c is a printing char together space char => 1,  not => 0.
    if ( is_print( (int)(c) ))
        cout << "This is a printing char together space char" << endl;

    // is_tolower( 'c' ) : c char is convert to lowercase
    if ( is_upper( c ))
        cout << "c is in lowercase : " << (char)( is_tolower (c) ) << endl;

    // is_toupper( 'c' ) : c char is convert to uppercase
    if ( is_lower( c ))
        cout << "c is in lowercase : " << (char)( is_toupper (c) ) << endl;
    return 0;
}
int is_digit( int c ){
    return ( c >= 48 && c <= 57 ) ? 1 : 0;
}
int is_alpha( int c ){
    return ( ( c >= 65 && c <= 90 ) || ( c >= 97 && c <= 122 ) ) ? 1 : 0;
}
int is_alnum( int c ){
    return ( is_digit( c ) == 1 || is_alpha( c ) == 1 ) ? 1 : 0;
}
int is_lower( int c ){
    return ( c >= 97 && c <= 122 ) ? 1 : 0;
}
int is_upper( int c ){
    return ( c >= 65 && c <= 90 ) ? 1 : 0;
}
int is_space( int c ){
    return ( c >= 65 && c <= 90 ) ? 1 : 0;
}
int is_xpunct( int c ){
    return ( is_alnum( c ) == 0 && is_space( c ) == 0 ) ? 1 : 0;
}
int is_graph( int c ){
    return ( c >= 33 && c <= 126 ) ? 1 : 0;
}
int is_print( int c ){
    return ( c >= 32 && c <= 126 ) ? 1 : 0;
}
int is_tolower( int c ){
    return ( is_upper( c ) == 1 ) ? c + 32 : c;
}
int is_toupper( int c ){
    return ( is_lower( c ) == 1 ) ? c - 32 : c;
}
