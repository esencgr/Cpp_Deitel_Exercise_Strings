/*
(Limericks)
A limerick is a humorous five-line verse in which the first and second lines rhyme with the fifth,and the
third line rhymes with the fourth. Using techniques similar to those developed in Exercise 8.11,
write a C++ program that produces random limericks. Polishing this program to produce good limericks
is a challenging problem, but the result will be worth the effort!
  --- The article array =  "the", "a", "one", "some" and "any";
  --- The noun array    =  "boy", "girl", "dog", "town" and "car";
  --- The verb array    =  "drove", "jumped", "ran", "walked" and "skipped";
  --- The preposition   =  "to", "from", "over", "under" and "on".
*/
#include <iostream>
#include <ctime>
#include <string.h>
#include <cstdlib>
using namespace std;
#define SIZE 100

bool is_valid( const char * );

int main( ){
    const char *words[4][5] = {{ "the", "a", "one", "some", "any" },
                              { "boy", "girl", "dog", "town", "car" },
                              { "drove", "jumped", "ran", "walked", "skipped" },
                              { "to", "from", "over", "under", "on" }};
    char sentence[ SIZE ] = "";
    int size, x, count = 0;
    const char *last_words[ 5 ] = { 0 };
    srand (time( NULL ));

    for ( int i = 0; i < 5; i++ ){
        for ( int j = 0; j < 4; j++ ){
            strcat( sentence, words[ j ][ rand() % 5 ]);
            strcat( sentence, " " );
        }
        strcat( sentence, words[ 0 ][ rand() % 5 ]);
        strcat( sentence, " " );

        x = rand() % 5;
        last_words[ count++ ] = words[ 1 ][ x ];

        strcat( sentence, words[ 1 ][ x ]);
        strcat( sentence, " " );

        cout << static_cast < char > ( toupper( sentence[ 0 ] )) << &sentence[ 1 ] << endl;
        sentence[ 0 ] = '\0';
    }

    for ( int i = 0; i < count; i++)
        cout << last_words[ i ] << endl;
    cout << endl;

    return 0;
}
bool is_valid( const char *str ){
    if ( str[ 0 ] == str[ 1 ] == str[ 4 ] && str[ 2 ] == str[ 3 ] )
        return 1;
    else
        return 0;
}
