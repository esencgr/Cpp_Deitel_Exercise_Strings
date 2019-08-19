/*
 (Latin Pig)
 Write a program that encodes English language phrases into pig Latin. Pig Latin is a form of coded language
 often used for amusement. Many variations exist in the methods used to form pigLatin phrases.For simplicity
 use the following algorithm:
   - To form a pig-Latin phrase from an English-language phrase, tokenize the phrase into words withfunction
     strtok. To translate each English word into a pig-Latin word, place the first letterof the English word
     at the end of the English word, and add the letters “ay.” Thus the word “jump” becomes “umpjay” the word
     “the” becomes “hetay” and the word “computer” becomes “omputercay.” Blanks between words remain as blanks.
     Assume that the: the English phrase consists of words separated by blanks, there are no punctuation marks
     and all words have two or more letters. Function printLatinWord should display each word.(Hint: Each time
     a token is found in a call to strtok, pass the token pointer to function printLatinWord,and print the pig
     Latin word.)
*/
#include <iostream>
#include <ctime>
#include <string.h>
#include <cstdlib>
using namespace std;
#define SIZE 80

void print_latin( const char * );

int main( int argc, char const *argv[] ){

    char sentence[ SIZE ], *token_ptr;
    cin.getline( sentence, SIZE );

    token_ptr = strtok( sentence, " .,;" );
    while ( token_ptr ){
        print_latin( token_ptr );
        token_ptr = strtok( 0, " .,;" );
        cout << ' ';
    }
    cout << '.' << endl;
    return 0;
}
void print_latin( const char * token_ptr ){
    int size = strlen( token_ptr );
    for ( int i = 1; i < size; i++ )
        cout << *( token_ptr + i );

    cout << *token_ptr << "ay";
}
