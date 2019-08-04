/*
(Comparing Strings) Write a program that uses function strcmp to compare two strings input
by the user. The program should state whether the first string is less than, equal to or greater
than the second string.
*/
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
#define SIZE 20
int main(){

    char string1[ SIZE ], string2[ SIZE ];
    cin >> string1 >> string2;

    int result = strcmp( string1, string2 );

    if ( result > 0 )
        cout << '\"' << string1 << "\" is greater than \"" << string2 << "\" up to " << " characters\n";
    else if ( result == 0 )
        cout << '\"' << string1 << '\"' << " is equal to \"" << string2 << '\"' << endl;
    else
        cout << '\"' << string1 << '\"' << " is less than \"" << string2 << '\"' << endl;

    return 0;
}
