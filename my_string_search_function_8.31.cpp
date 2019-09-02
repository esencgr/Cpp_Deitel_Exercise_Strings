// Using of string searching functions.
/*
char *strchr( const char *s, int c );
      Locates the first occurrence of character c in string s. If c is found, a pointer to c in s is
      returned. Otherwise, a NULL pointer is returned.

size_t strcspn( const char *s1, const char *s2 );
      Determines and returns the length of the initial segment of string s1 consisting of characters
      not contained in string s2.

size_t strspn( const char *s1, const char *s2 );
      Determines and returns the length of the initial segment of string s1 consisting only of
      characters contained in string s2.

char *strpbrk( const char *s1, const char *s2 );
      Locates the first occurrence in string s1 of any character in string s2. If a character from
      string s2 is found, a pointer to the character in string s1 is returned. Otherwise, a NULL
      pointer is returned.

char *strrchr( const char *s, int c );
      Locates the last occurrence of c in string s. If c is found, a pointer to c in string s is
      returned. Otherwise, a NULL pointer is returned.

char *strstr( const char *s1, const char *s2 );
      Locates the first occurrence in string s1 of string s2. If the string is found, a pointer to the
      string in s1 is returned. Otherwise, a NULL pointer is returned.

char *strtok( char *s1, const char *s2 );
      A sequence of calls to strtok breaks string s1 into “tokens”—logical pieces such as words
      in a line of text—separated by characters contained in string s2. The first call contains s1
      as the first argument, and subsequent calls to continue tokenizing the same string contain
      NULL as the first argument. A pointer to the current token is returned by each call. If there
      are no more tokens when the function is called, NULL is returned.

*/
#include <iostream>
#include <string.h>
using namespace std;

void *search( const char *, char );
size_t my_strcspn( const char *, const char * );
size_t my_strspn( const char *, const char * );

int main(){

// // char *strchr( const char *s, char c ) --> (finding first location of c char and writing neext characters of s)
//     cout << "---------------char *strchr( const char *s, char c1 )------------------" << endl;
//
//     const char *s = "this is a test";
//     char c1, c2;
//
//     cout << "s : " << s << endl;
//     cout << "enter c1 key : ";
//     cin >> c1;
//     search( s, c1 );
//
//
//     cout << "\ns : " << s << endl;
//     cout << "enter c2 key : ";
//     cin >> c2;
//     search( s, c2 );

// size_ t strcspn( const char *s1, const char *s2 ) --> (returns size of absent s1 str characters in s2 str)
    cout << "----------size_t strcpsn( const char *s1, const char *s2 )-------------" << endl;

    const char *s1 = "xxxxe156", *s2 = "value156";

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    cout << "different : " << my_strcspn( s1, s2 );

// size_ t strspn( const char *s1, const char *s2 ) --> (returns size of include s1 str characters in s2 str)
    cout << "\n----------size_t strspn( const char *s3, const char *s4 )--------------" << endl;
    const char *s3 = "e2kkk";
    const char *s4 = "e2345";
    cout << "s3 : " << s3 << endl;
    cout << "s4 : " << s4 << endl;
    cout << "same char size : " << my_strspn( s3, s4 ) << endl << endl;

// // char* strpbrk( const char *s1, const char *s2 ); --> (situated first char of s2 , includes from s1 chaarcters)
//     cout << "----------char* strpbrk( const char *str1, const char *str2 )----------" << endl;
//     const char *str1 = "this is a test";
//     const char *str2 = "is";
//     cout << "str1 : " << str1 << endl;
//     cout << "str2 : " << str2 << endl;
//     if ( strpbrk( str1, str2 ) )
//         cout << strpbrk( str1, str2 ) << endl << endl;
//     else
//         cout << "char is not found" << endl << endl;
//
// // char* strrchr( const char *s, int c ) --> (This function determines 'c' character's last location and writing next char)
//    cout << "-----------char *strrchr( const char *ss, char cc1 ) ------------------" << endl;
//    const char *ss = "this is a test";
//    char cc1 = 'a';
//    cout << "ss : " << ss << endl;
//    cout << "cc1 : " << cc1 << endl;
//    cout << strrchr( ss, cc1 ) << endl << endl;
//
// // char* strstr const char *s1, const cahr *s2 ) --> (finding first location s2 str and writing next characters of s1)
//     cout << "----------char *strstr( const char *str3, const char *str4 )-----------" << endl;
//     const char *str3 = "this is a test";
//     const char *str4 = "is";
//     cout << "str3 : " << str3 << endl;
//     cout << "str4 : " << str4 << endl;
//     if ( strstr( str3, str4 ) )
//         cout << strstr( str3, str4 ) << endl;
//     else
//         cout << "char is not found" << endl;
//
// // char *strtok( const char *s, char c )-->(this function separates the s by determined characters, like a atom.)
//
//     cout << "-----------------char *strtok( const char *s, char c )-----------------" << endl;
//     char string[] = "this is a test";
//     char *atom_ptr;
//     cout << "string for seperate : " << string << endl;
//     cout << "words :" << endl;
//     atom_ptr = strtok( string, " ");
//         while ( atom_ptr != " " ){
//               cout << atom_ptr << endl;
//               atom_ptr= strtok( NULL , " " );
//         }
    return 0;
}
void *search( const char *s, char c ){
     int count, temp=0;
     for ( count = 0; *s != '\0'; s++, count++ ){
         if ( *s == c ) {
            temp = count;
            cout << "finded indeces : " << count << endl;
            cout << "after this character : " << s << endl;
         }
     }
     if ( temp == 0 )
        cout << "not finded ! " << endl;

}

size_t my_strcspn(const char *str, const char *chars) {
    size_t i,j;
    int count = 0;
        for ( i = 0, j = 0; chars[ j ] != '\0', str[ i ] != '\0'; j++,i++, count++)
            if ( chars[ j ] != str[ i ] )
                break;
    return count;
}

size_t my_strspn(const char *str, const char *chars){
  size_t i, j;
  for (i = 0; str[ i ] != '\0'; i++) {
      for (j = 0; chars[ j ] != str[ i ] ; j++){
          if (chars[ j ] == '\0')
              return i; // char not found, return index so far
      }
  }
  return i;  // complete string matches, return length
}

// // size_ t strcspn( const char *s1, const char *s2 ) --> (returns size of absent s1 str characters in s2 str)
//     cout << "----------size_t strcpsn( const char *s1, const char *s2 )-------------" << endl;
//
//     const char *s1 = "value 3.14159", *s2 = "1234567890";
//
//     cout << "s1 : " << s1 << endl;
//     cout << "s2 : " << s2 << endl;
//     cout << "different char size : " << strcspn( s1, s2 ) << endl << endl;
//
// // size_ t strspn( const char *s1, const char *s2 ) --> (returns size of include s1 str characters in s2 str)
//     cout << "----------size_t strspn( const char *s3, const char *s4 )--------------" << endl;
//     const char *s3 = "v14159";
//     const char *s4 = "v1234567890";
//     cout << "s3 : " << s3 << endl;
//     cout << "s4 : " << s4 << endl;
//     cout << "same char size : " << strspn( s3, s4 ) << endl << endl;
//
// // char* strpbrk( const char *s1, const char *s2 ); --> (situated first char of s2 , includes from s1 chaarcters)
//     cout << "----------char* strpbrk( const char *str1, const char *str2 )----------" << endl;
//     const char *str1 = "this is a test";
//     const char *str2 = "is";
//     cout << "str1 : " << str1 << endl;
//     cout << "str2 : " << str2 << endl;
//     if ( strpbrk( str1, str2 ) )
//         cout << strpbrk( str1, str2 ) << endl << endl;
//     else
//         cout << "char is not found" << endl << endl;
//
// // char* strrchr( const char *s, int c ) --> (This function determines 'c' character's last location and writing next char)
//    cout << "-----------char *strrchr( const char *ss, char cc1 ) ------------------" << endl;
//    const char *ss = "this is a test";
//    char cc1 = 'a';
//    cout << "ss : " << ss << endl;
//    cout << "cc1 : " << cc1 << endl;
//    cout << strrchr( ss, cc1 ) << endl << endl;
//
// // char* strstr const char *s1, const cahr *s2 ) --> (finding first location s2 str and writing next characters of s1)
//     cout << "----------char *strstr( const char *str3, const char *str4 )-----------" << endl;
//     const char *str3 = "this is a test";
//     const char *str4 = "is";
//     cout << "str3 : " << str3 << endl;
//     cout << "str4 : " << str4 << endl;
//     if ( strstr( str3, str4 ) )
//         cout << strstr( str3, str4 ) << endl;
//     else
//         cout << "char is not found" << endl;
//
// // char *strtok( const char *s, char c )-->(this function separates the s by determined characters, like a atom.)
//
//     cout << "-----------------char *strtok( const char *s, char c )-----------------" << endl;
//     char string[] = "this is a test";
//     char *atom_ptr;
//     cout << "string for seperate : " << string << endl;
//     cout << "words :" << endl;
//     atom_ptr = strtok( string, " ");
//         while ( atom_ptr != " " ){
//               cout << atom_ptr << endl;
//               atom_ptr= strtok( NULL , " " );
//         }
