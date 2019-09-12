/* This code lets the elimination of consecutive matches in a string.
   We find the shortest version of the given string.
   For Ex:
      f( aabcccdd ) --> f( bcccdd ) --> f( bcdd ) --> bc
*/
#include <iostream>
#include <string.h>
#define SIZE 50
using namespace std;

void palindrome( char * );
void palindrome1( char [] );
bool palindrome2( char [] );

int main(){
    char str[ SIZE ];
    cout << "Enter a string : ";
    cin >> ( str );

    palindrome( str );
    palindrome1( str );

    if ( palindrome2( str ) )
        cout << "palindrome !" << endl;
    else
        cout << "not palindrome !" << endl;

    return 0;
}

void palindrome( char *s ){
    char *p, *q;
    bool state= true;
    p = s;
    q = s;
    while ( *q != '\0' )
        q++;
    q--; // the last element of string  abc/0 - 0123 -> 2
    while ( q > p ){
        if ( *p != *q )
            state = false;
        p++;
        q--;
    }
    if ( !state )
        cout << "not palindrome !" << endl;
    else
        cout << "palindrome !" << endl;
}

void palindrome1( char s[] ){
    int l = strlen ( s );
    bool state = true;
    for ( int i = 0; ( l-1 ) > i ; i++, l-- ){
        if ( s[ i ] != s[ l - 1 ] )
           state = false;
    }
    if ( !state )
        cout << "not palindrome !" << endl;
    else
        cout << "palindrome !" << endl;
}

bool palindrome2( char s[] ){
    int l = strlen ( s );
    for ( int i = 0; ( l-1 ) > i ; i++, l-- )
        if ( s[ i ] != s[ l - 1 ] )
            return 0;
    return 1;
}
