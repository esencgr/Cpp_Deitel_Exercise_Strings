// Using of string searching functions.
/*

  char *strchr( const char *s, char c ); ( finding first location and )
      --> This function determines 'c' characater's first location. If it finds,
          returned a pointer that showing c, else returned NULL pointer.

  size_t strcspn( const char *s1, const char *s2 );
      --> This function finds that, characters in s1 , absent of first part of
          the s2 . And returns this part's size.

  size_t strspn( const char *s1, const char *s2 );
      --> This function finds that, characters in s1 , include of first part of
          the s2 . And returns this part's size.

  char *strpbrk( const char *s1, const char *s2 );
      --> This function finds that in s1's first location of any characters in s2.
          If it finds, returned a pointer that showing character in the s1, else
          returned NULL pointer.

  char *strrchr( const char *s, int c );
      --> This function determines 'c' character's last location.
          If it finds, returned a pointer that showing character c of find in the
          s string, else  returned NULL pointer.

  char *strstr( const char *s1, const cahr *s2 );
      --> This function determines s1 string's last location in the s2 string's.
          If it finds, returned a pointer that showing s1, else  returned NULL pointer.

  char *strtok( const char *s, int c );
      --> This function separates the s1 by determined characters in s2, like a atom.

*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){

// char *strchr( const char *s, char c ) --> (finding first location of c char and writing next characters of s)
    cout << "---------------char *strchr( const char *s, char c1 )------------------" << endl;
    const char *s = "this is a test";
    char c1 = 's', c2 = 'z';
    cout << "s : " << s << endl;
    cout << "c1 : " << c1 << endl;
        if ( strchr( s, c1 ) )
            cout << strchr( s, c1 ) << endl << endl;
        else
            cout << "char is not found" << endl << endl;

    cout << "s : " << s << endl;
    cout << "c2 : " << c2 << endl;
        if ( strchr( s, c2 ) )
            cout << strchr( s, c2 ) << endl << endl;
        else
            cout << "char is not found" << endl << endl;

// size_ t strcspn( const char *s1, const char *s2 ) --> (returns size of absent s1 str characters in s2 str)
    cout << "----------size_t strcpsn( const char *s1, const char *s2 )-------------" << endl;
    const char *s1 = "value 3.14159";
    const char *s2 = "1234567890";
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    cout << "different char size : " << strcspn( s1, s2 ) << endl << endl;

// size_ t strspn( const char *s1, const char *s2 ) --> (returns size of include s1 str characters in s2 str)
    cout << "----------size_t strspn( const char *s3, const char *s4 )--------------" << endl;
    const char *s3 = "v14159";
    const char *s4 = "v1234567890";
    cout << "s3 : " << s3 << endl;
    cout << "s4 : " << s4 << endl;
    cout << "same char size : " << strspn( s3, s4 ) << endl << endl;

// char* strpbrk( const char *s1, const char *s2 ); --> (situated first char of s2 , includes from s1 chaarcters)
    cout << "----------char* strpbrk( const char *str1, const char *str2 )----------" << endl;
    const char *str1 = "this is a test";
    const char *str2 = "is";
    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;
    if ( strpbrk( str1, str2 ) )
        cout << strpbrk( str1, str2 ) << endl << endl;
    else
        cout << "char is not found" << endl << endl;

// char* strrchr( const char *s, int c ) --> (This function determines 'c' character's last location and writing next char)
   cout << "-----------char *strrchr( const char *ss, char cc1 ) ------------------" << endl;
   const char *ss = "this is a test";
   char cc1 = 'a';
   cout << "ss : " << ss << endl;
   cout << "cc1 : " << cc1 << endl;
   cout << strrchr( ss, cc1 ) << endl << endl;

// char* strstr const char *s1, const cahr *s2 ) --> (finding first location s2 str and writing next characters of s1)
    cout << "----------char *strstr( const char *str3, const char *str4 )-----------" << endl;
    const char *str3 = "this is a test";
    const char *str4 = "is";
    cout << "str3 : " << str3 << endl;
    cout << "str4 : " << str4 << endl;
    if ( strstr( str3, str4 ) )
        cout << strstr( str3, str4 ) << endl;
    else
        cout << "char is not found" << endl;

// char *strtok( const char *s, char c )-->(this function separates the s by determined characters, like a atom.)

    cout << "-----------------char *strtok( const char *s, char c )-----------------" << endl;
    char string[] = "this is a test";
    char *atom_ptr;
    cout << "string for seperate : " << string << endl;
    cout << "words :" << endl;
    atom_ptr = strtok( string, " ");
        while ( atom_ptr != " " ){
              cout << atom_ptr << endl;
              atom_ptr= strtok( NULL , " " );
        }
    return 0;
}
