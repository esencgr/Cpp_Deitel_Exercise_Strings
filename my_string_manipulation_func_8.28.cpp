// Copying a string using array notation and pointer notation..
/*char *strcpy( char *s1, const char *s2 )
            Copies string s2 into array s1. The value of s1 is returned.
char *strncpy( char *s1, const char *s2, size_t n )
            Copies at most n characters of string s2 into array s1. The value of s1 is returned.
char *strcat( char *s1, const char *s2 )
            Appends string s2 to array s1. The first character of s2 overwrites the terminating
            null character of s1. The value of s1 is returned.
char *strncat( char *s1, const char *s2, size_t n )
            Appends at most n characters of string s2 to array s1. The first character of s2
            overwrites the terminating null character of s1. The value of s1 is returned.*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

char *copy1( char*, const char*);
char *copy2( char[], const char[]);

char *copy1_n( char*, const char*, int );
char *copy2_n( char[], const char[], int);

char *cat1( char*, const char*);
char *cat2( char[], const char[]);

char *cat1_n( char*, const char*, int);
char *cat2_n( char[], const char[], int);

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

    const char *a = "hello";
    // char *a_copy = (char*) malloc ( sizeof(char) * sizeof( *a ) );
    // copy1( a_copy, a );

    char *b = (char*) malloc ( sizeof(char) * sizeof( *a ));
    cout << "enter your name : ";
    cin >> b;

    cout << cat1( b, a ) << endl;
    cout << cat2( b, a ) << endl;
    cout << cat1_n( b, a, 3 ) << endl;
    cout << cat2_n( b, a, 4 ) << endl;

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
    // for ( int c = 0; c < size; c++, s1++ ,s2++)
    //     *s1 = *s2;
}
// copying the s1 to s2's n characters with array notation
char *copy2_n( char s1[], const char s2[], int size ){
    s1[ size ] = '\0';
    for ( int i = 0; (s1[ i ]) != '\0';  i++)
        s1[ i ] = s2[ i ];
}

char *cat1( char *s1, const char *s2){
    char *ptr = s1;
    for ( ; *s1 != '\0'; ++s1 )
        ; // empty body
    for ( ; *s1 = *s2; ++s1, ++s2 )
        ; // empty body
    return ptr ;
}

char *cat2( char s1[], const char s2[]){
    int i;
    for ( i = 0; s1[ i ] != '\0'; ++i )
        ; // empty body
    for ( int j = 0; s1[ i ] = s2[ j ]; ++i, ++j )
        ; // empty body
    return s1 ;
}

// copying the s1to s2's n characters with pointer notation
char *cat1_n( char *s1, const char *s2, int size ){
    char *ptr = s1;
    for ( int c = 0; c < size; ++s1, c++ )
        ; // empty body
    for ( ; *s1 = *s2; ++s1, ++s2 )
        ; // empty body
    return ptr ;
}

// copying the s1 to s2's n characters with array notation
char *cat2_n( char s1[], const char s2[], int size ){
    int i;
    for ( i = 0; i < size; ++i )
        ; // empty body
    for ( int j = 0; s1[ i ] = s2[ j ]; ++i, ++j )
        ; // empty body
    return s1 ;
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
