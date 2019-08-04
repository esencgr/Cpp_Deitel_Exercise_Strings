/*
(Comparing Strings) Write a program that uses function strncmp to compare two strings
input by the user. The program should input the number of characters to be compared.
The program should state whether the first string is less than, equal to or greater
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

    cout << "How many characters should be compared: ";
    int compare_count;
    cin >> compare_count;

    int result = strncmp( string1, string2, compare_count);

    if ( result > 0 )
        cout << '\"' << string1 << "\" is greater than \"" << string2 << "\" up to " << compare_count << " characters\n";
    else if ( result == 0 )
        cout << '\"' << string1 << '\"' << " is equal to \"" << string2 << "\" up to " << compare_count << " characters\n";
    else
        cout << '\"' << string1 << '\"' << " is less than \"" << string2 << "\" up to " << compare_count << endl;

    return 0;
}
