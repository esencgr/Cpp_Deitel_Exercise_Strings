/* This code lets the elimination of consecutive matches in a string.
   We find the shortest version of the given string.
   For Ex:
      f( aabcccdd ) --> f( bcccdd ) --> f( bcdd ) --> bc
*/
#include <iostream>
using namespace std;

char *match( char * );

int main(){
    char str[ 20 ];
    cout << "\nEnter a string : ";
    cin >> str;
    cout << match( str );
    return 0;
}

char *match( char *s ){
    int i = 0;
    bool state = false;
    char c = s[ i ];

    if ( c == '\0' )
        return s;

    while ( c != '\0' ){
        char c1 = s[ i + 1 ];
        if ( c == c1 && i == 0 ){
            state = true;
            s = &s[ i+2 ];
        }
        else if ( c == c1 ){
            state = true;
            while ( s[ i ] != '\0' ){
                s[ i ] = s[ i+2 ];
                i++;
            }
            s[ i ] = '\0';
        }
        i++;
        c = s[ i ];
    }
    
    if ( state == false )
        return s;
    else
        return match( s );
}
