/* Write two versions of function strlen in Fig. 5.29.
   The first version should use array subscripting, and the second version should use pointers and
   pointer arithmetic.
*/

#include <iostream>
#include <string>
using namespace std;

// with pointer notation
int my_strlen1 ( const char* );
int my_strlen2 ( const char * );

// with array notation
int my_strlen3 ( const char []);
int my_strlen4 ( const char []);

int main(){

    char str[ 30 ];
    cin.getline ( str, 30 );

    int size1 = my_strlen1 ( str );
    cout << "1.The string is include " <<  size1 << " character " << endl;

    int size2 = my_strlen2 ( str );
    cout << "2.The string is include " <<  size2 << " character " << endl;

    int size3 = my_strlen3 ( str );
    cout << "3.The string is include " <<  size3 << " character " << endl;

    int size4 = my_strlen4 ( str );
    cout << "4.The string is include " <<  size4 << " character " << endl;

    return 0;
}

// In ths function, s_ptr is a pointer that defined a character constant.
// The characters can't changes using by s_ptr. ( So, s_ptr is only a readable pointer.)
int my_strlen1 ( const char *s_ptr ){         // the function hasn't got first variable assignment.
    int count;
    for ( count = 0;  *s_ptr != '\0'; *s_ptr++ , count++)
        ;
    return count;
}

int my_strlen2( const char *str ){
    int count = 0;
    while ( *str++ != '\0' ){
        count++;
    }
    return count;
}
int my_strlen3 ( const char s[ ] ){
    int count;
    for ( count = 0; s[ count ] != '\0'; count++ )
        ;
    return count;
}

int my_strlen4( const char str[ ] ){
    int count = 0, i = 0;
    while ( str [ i++ ] != '\0' ){
        count++;
    }
    return count;
}
