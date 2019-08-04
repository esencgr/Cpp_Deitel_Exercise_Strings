/*
(Random Sentences)
Write a program that uses random number generation to create sentences.The program should use four arrays
of pointers to char called article, noun, verb and preposition.The program should create a sentence by
selecting a word at random from each array in the following order: article, noun, verb, preposition, article
and noun. As each word ,is picked,it should be concatenated to the previous words in an array large enough
to hold the entire sentence. The words should be separated by spaces. When the final sentence is output,it
should start with a capital letter and end with a period. The program should generate 20 such sentences. The
arrays should be filled as follows:
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
int main(int argc, char const *argv[]) {
    const char *words[4][5] = {{ "the", "a", "one", "some", "any" },
                                { "boy", "girl", "dog", "town", "car" },
                                { "drove", "jumped", "ran", "walked", "skipped" },
                                { "to", "from", "over", "under", "on" }};
    char sentence[ SIZE ] = "";
    srand (time( NULL ));
    for ( int i = 0; i < 20;  i++ ){
        for ( int j = 0; j < 4; j++ ) {
            strcat( sentence, words[ j ][ rand() % 5 ]);
            strcat( sentence, " " );
        }
        for ( int k = 0; k < 2; k++ ) {
            strcat( sentence, words[ k ][ rand() % 5 ]);
            strcat( sentence, " " );
        }
        cout << static_cast < char > (toupper( sentence[ 0 ] )) << &sentence[ 1 ] << "." << endl;
        // cout << (char)(toupper( sentence[ 0 ] )) << &sentence[ 1 ] << "." << endl;
        sentence[ 0 ] = '\0';
    }
    cout << endl;
    return 0;
}
// #include <iostream>
// #include <ctime>
// #include <string.h>
// #include <cstdlib>
// using namespace std;
// const int SIZE = 100;
// int main(int argc, char const *argv[]) {
//     const char *article[] = { "the", "a", "one", "some", "any" },
//                *noun[] = { "boy", "girl", "dog", "town", "car" },
//                *verb[] = { "drove", "jumped", "ran", "walked", "skipped" },
//                *preposition[] = { "to", "from", "over", "under", "on" };
//     char sentence[ SIZE ] = "";
//     for ( int i = 0; i < 20;  i++){
//          strcat( sentence, article[ rand() % 5 ]);
//          strcat( sentence, " ");
//          strcat( sentence, noun[ rand() % 5 ]);
//          strcat( sentence, " ");
//          strcat( sentence, verb[ rand() % 5 ]);
//          strcat( sentence, " ");
//          strcat( sentence, preposition[ rand() % 5 ]);
//          strcat( sentence, " ");
//          strcat( sentence, article[ rand() % 5 ]);
//          strcat( sentence, " ");
//          strcat( sentence, noun[ rand() % 5 ]);
//          strcat( sentence, "");
//          cout << static_cast< char > (toupper( sentence[ 0 ]) ) << &sentence[ 1 ] << "." << endl;
//          sentence[ 0 ] = '\0';
//      }
//      cout << endl;
//      return 0;
// }
