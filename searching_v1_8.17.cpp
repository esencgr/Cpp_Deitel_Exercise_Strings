/*
(Search String)
Write a program that inputs a line of text and a search string from the keyboard. Using function strstr,
locate the first occurrence of the search string in the line of text, and assign the location to variable
searchPtr of type char *. If the search string is found, print the remainder of the line of text beginning
with the search string. Then, use strstr again to locate the next occurrence of the search string in the
line of text. If a second occurrence is found, print the remainder of the line of text beginning with the
second occurrence. (Hint: The second call to strstr should contain the expression searchPtr + 1 as its
first argument.)
*/
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 20

int main( ){

    char text[ SIZE ], search[ SIZE ], *search_ptr;

    cout << "Enter a line of text: ";
    cin.getline( text, SIZE );

    cout << "Enter a text for search: ";
    cin >> search;

    search_ptr = strstr( text, search );
    if ( search_ptr ){
        cout << &search_ptr << endl;
        cout << "The remainder of the line beginning with the first occurrence of --> "
             << "\"" << search << "\"" << "\n" << search_ptr << endl;

             search_ptr = strstr( search_ptr + 1, search );
             if ( search_ptr )
                 cout << "The remainder of the line beginning with the second occurrence of --> "
                      << "\"" << search << "\"" << "\n" << search_ptr << endl;
             else
                 cout << "The search string appeared only once.\n";
    }
    else
        cout << "\"" << search << "\" not found.\n";

    return 0;
}
