// Copying a string using array notation and pointer notation..
#include <iostream>
#include <stdlib.h>
using namespace std;

char *copy1( char*, const char*);
char *copy2( char[], const char[]);
char *copy1_n( char*, const char*, int );
char *copy2_n( char[], const char[], int);

int main(){

    const char *string2 = "HELLO USER";
    char *string1 = (char*) malloc ( sizeof(char) * sizeof(* string2) );

    const char string4[] = "CGR ESEN";
    char string3[ sizeof(string4) ];

    copy1( string1, string2 );
    cout << "string1 : " << string1 << endl;

    copy2( string3, string4 );
    cout << "string3 : " << string3 << endl;

    copy1_n( string1, string2, 8 );
    cout << "string1_n : " << string1 << endl;

    copy2_n( string3, string4, 5 );
    cout << "string3_n : " << string3 << endl;

    return 0;
}

// copying the s1 to s2 with pointer notation
char *copy1( char *s1, const char *s2){
    for ( ; ( *s1 = *s2 ) != '\0'; s1++ ,s2++)
        ;
}

// copying the s1 to s2 with array notation
char *copy2( char s1[], const char s2[] ){
    for ( int i = 0; (s1[ i ] = s2[ i ]) != '\0';  i++)
        ;
}

// copying the s1to s2's n characters with pointer notation
char *copy1_n( char *s1, const char *s2, int size ){
    *(s1 + size) = '\0';
    for ( ; ( *s1 ) != '\0'; s1++ ,s2++)
        *s1 = *s2;

}
// copying the s1 to s2's n characters with array notation
char *copy2_n( char s1[], const char s2[], int size ){
    s1[ size ] = '\0';
    for ( int i = 0; (s1[ i ]) != '\0';  i++)
        s1[ i ] = s2[ i ];
}
/*
void copy1( char s1[], const char s2[]){
   for ( int i = 0; (s2[ i ]) != '\0';  i++)
       s1[ i ] = s2[ i ];
}
void copy2( char *s1, const char *s2 ){
   for ( ; ( *s2 ) != '\0'; s1++ ,s2++)
       *s1 = *s2;
}*/
