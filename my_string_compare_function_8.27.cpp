/* compare string functions. strcmp, strncmp  */
/* this functions are compares two string
int strcmp( const char *s1, const char *s2 );
          Compares the string s1 with the string s2. The function returns 0,less than 0 or greater
          than 0 if s1 is equal to, less than or greater than s2, respectively.
int strncmp( const char *s1, const char *s2, size_t n );
          Compares up to n characters of the string s1 with the string s2. The function returns 0,
          less than 0 or greater than 0 if s1 is equal to, less than or greater than s2, respectively.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int my_strcmp1( const char *, const char * );
int my_strcmp2( const char [], const char [] );
int my_strncmp1( const char *, const char *, unsigned  );
int my_strncmp2( const char [], const char [], unsigned  );

int main(){

    const char *s1 = "123A";
    const char *s2 = "123A";

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl << endl;

    //cout << "pointer noatation -> s1 & s2 : " << my_strcmp1( s1, s2 ) << endl;
    cout << "arraysub notation -> s1 & s2 : " << my_strcmp2( s1, s2 ) << endl << endl;;

    //cout << "pointer noatation ( n=3 ) -> s1 & s2 : " << my_strncmp1( s1, s2, 3 ) << endl;
    //cout << "arraysub notation ( n=3 ) -> s1 & s2 : " << my_strncmp2( s1, s2, 3 ) << endl;

    return 0;
}

int my_strcmp1( const char *s1, const char *s2 ){
    for ( ; *s1 == *s2; s1++, s2++ )
        ;

    s1--;
    s2--;

    if ( *s1 == '\0' && *s2 == '\0' )
        return 0;
    else if ( *s1 < *s2 )
        return -1;
    else
        return 1;
}

int my_strcmp2( const char s1[], const char s2[] ){
    int sub;

    for ( sub = 0; s1[ sub ] == s2[ sub ]; sub++ )
        ;

    sub--;

    if ( s1[ sub ] == '\0' && s2[ sub ] == '\0')
        return 1;
    // else if ( s1[ sub ] < s2[ sub ] )
    //     return -1;
    else
        return 0;
}

int my_strncmp1( const char *s1, const char *s2, unsigned n ){
    for ( unsigned c = 0; *s1 == *s2 && c < n; c++, s1++, s2++ )
        ;

    s1--;
    s2--;

    if ( *s1 == *s2 )
        return 0;
    else if ( *s1 < *s2 )
        return -1;
    else
        return 1;
}

int my_strncmp2( const char s1[], const char s2[], unsigned n ){
    int sub;

    for ( sub = 0; s1[ sub ] == s2[ sub ] && sub < n; sub++ )
        ;

    sub--;

    if ( s1[ sub ] == s2[ sub ] )
        return 0;
    else if ( s1[ sub ] < s2[ sub ] )
        return -1;
    else
        return 1;
}
