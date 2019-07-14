/*
This code includes of letteracter library functions
*/
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(){

    // isdigit( 'c' ) : c is an integer => 1,  not => 0.
    cout << ( isdigit( '1' ) ? " 1 is a number. " : " 1 is not a number." ) << endl;
    cout << ( isdigit( '#' ) ? " # is a number. " : " # is not a number." ) << endl << endl;

    // isalpha( 'c' ) : c is an letter => 1,  not => 0.
    cout << ( isalpha( 'A' ) ? " A is a letter. " : " A is not a letter." ) << endl;
    cout << ( isalpha( 'b' ) ? " b is a letter. " : " b is not a letter." ) << endl;
    cout << ( isalpha( '#' ) ? " # is a letter. " : " # is not a letter." ) << endl;
    cout << ( isalpha( '4' ) ? " 4 is a letter. " : " 4 is not a letter." ) << endl << endl;

    // isalnum( 'c' ) : c is an letter or number => 1,  not => 0.
    cout << ( isalnum( 'A' ) ? " A is a letter or number. " : " A is not a letter or number." ) << endl;
    cout << ( isalnum( 'b' ) ? " b is a letter or number. " : " b is not a letter or number." ) << endl;
    cout << ( isalnum( '#' ) ? " # is a letter or number. " : " # is not a letter or number." ) << endl;
    cout << ( isalnum( '4' ) ? " 4 is a letter or number. " : " 4 is not a letter or number." ) << endl << endl;

    // isxdigit( 'c' ) : c is an hex number => 1,  not => 0.
    cout << ( isxdigit( 'F' ) ? " F is a hexadecimal number. " : " F is not a hexadecimal number." ) << endl;
    cout << ( isxdigit( 'J' ) ? " J is a hexadecimal number. " : " J is not a hexadecimal number." ) << endl;
    cout << ( isxdigit( '7' ) ? " 7 is a hexadecimal number. " : " 7 is not a hexadecimal number." ) << endl;
    cout << ( isxdigit( '&' ) ? " & is a hexadecimal number. " : " & is not a hexadecimal number." ) << endl;
    cout << ( isxdigit( 'f' ) ? " f is a hexadecimal number. " : " f is not a hexadecimal number." ) << endl << endl;

    // islower( 'c' ) : c is an lowercase let => 1,  not => 0.
    cout << ( islower( 'D' ) ? " D is a lowercase letter. " : " D is not a lowercase letter." ) << endl;
    cout << ( islower( 'd' ) ? " d is a lowercase letter. " : " d is not a lowercase letter." ) << endl;
    cout << ( islower( '5' ) ? " 5 is a lowercase letter. " : " 5 is not a lowercase letter." ) << endl;
    cout << ( islower( '!' ) ? " ! is a lowercase letter. " : " ! is not a lowercase letter." ) << endl << endl;

    cout << ( isupper( 'D' ) ? " D is a uppercase letter. " : " D is not a uppercase letter." ) << endl;
    cout << ( isupper( 'd' ) ? " d is a uppercase letter. " : " d is not a uppercase letter." ) << endl;
    cout << ( isupper( '5' ) ? " 5 is a uppercase letter. " : " 5 is not a uppercase letter." ) << endl;
    cout << ( isupper( '!' ) ? " ! is a uppercase letter. " : " ! is not a uppercase letter." ) << endl << endl;

    // Transformation of lowwer ed uppercase.
    cout << " D --> lowercase --> " << char( tolower( 'D' ) ) << endl;
    cout << " u --> uppercase --> " << char( toupper( 'u' ) ) << endl;
    cout << " 5 --> lowercase --> " << char( tolower( '5' ) ) << endl;
    cout << " & --> uppercase --> " << char( toupper( '&' ) ) << endl << endl;

    // isxcntrl( 'c' ) == isspace ( 'c' ) : c is an control variable => 1,  not => 0.
    cout << ( iscntrl( '\n' ) ? " newline is a control variable " : " newline is not a control variable." ) << endl;
    cout << ( iscntrl( '\t' ) ? " tab is a control variable " : " tab is not a control variable." ) << endl << endl;

    // isxpunct( 'c' ) : c is a punctuation character => 1,  not => 0.
    cout << ( ispunct( '.' ) ? " . is a punct " : " . is not a punct." ) << endl;
    cout << ( ispunct( '1' ) ? " 1  is a punct " : " 1 is not a punct." ) << endl;
    cout << ( ispunct( '\t') ? " tab is a punct " : " tab is not a punct." ) << endl;
    cout << ( ispunct( ' ' ) ? " space is a punct " : " space is not a punct." ) << endl << endl;

    // isgraph( 'c' ) : c is a printing char without space char=> 1,  not => 0.
    cout << ( isgraph( 'Q') ? " Q is a char that different of space " : " Q is not a char that different of space." ) << endl;
    cout << ( isgraph( ' ' ) ? " space is a char that different of space " : " space is not a char that different of space." ) << endl << endl;

    // isprint( 'c' ) : c is a printing char together space char => 1,  not => 0.
    cout << ( isprint( 'Q') ? " Q is a char that different of space " : " Q is not a char that different of space." ) << endl;
    cout << ( isprint( ' ' ) ? " space is a char that different of space " : " space is not a char that different of space." ) << endl;

    return 0;
}
