#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
   /*
     char *strerror( int errornum );
        Maps errornum into a full text string in a compiler- and locale-specific manner
        (e.g. the message may appear in different languages based on its location). A
        pointer to the string is returned.
   */
    cout << "\nstrerror : " << strerror(2) << endl;

    /*
      size_t strlen( const char *s );
         Determines the length of string s. The number of characters preceding
         the terminating null character is returned.
    */
    const char *str = "n string char";
    cout << "string : " << str << endl;
    cout << "size of string : " << strlen( str );

    return 0;
}
