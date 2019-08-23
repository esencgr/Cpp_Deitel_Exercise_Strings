#include <iostream>
#include <string.h>
using namespace std;
int main(){

    int c;
    cout << "Enter an ASCII character code (EOF to end) : ";

    while ( cin >> c && c!= EOF ){
         if ( c >= 0  &&  c <= 255 )
           cout << "The corresponding character is " << ( char )( c ) << endl;
         else
           cout << "Invalid character code\n";

         cout << "\nEnter an ASCII character code (EOF to end): ";
    }
    
    return 0;
}
