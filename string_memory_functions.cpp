// memory functions
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){

   /* void *memcpy( void *s1, const void *s2, size_t n );
      Copies n characters from the object pointed to by s2 into the object pointed
      to by s1. A pointer to the resulting object is returned.
   */
    char *s1;
    const char *s2 = "copy string";
    memcpy( &s1, &s2, 16 );
    cout << "string1 : " << s1 << endl;
    cout << "string2 : " << s2 << endl;

    // char s1[16];
    // const char s2[] = "copy string";
    // memcpy( s1, s2, 16 );
    // cout << "string1 : " << s1 << endl;
    // cout << "string2 : " << s2 << endl;

    /*
    void *memmove( void *s1, const void *s2, size_t n );
         Copies n characters from the object pointed to by s2 into the object
         pointed to by s1. The copy is performed as if the characters were
         first copied from the object pointed to by s2 into a temporary array
         and then from the temporary array into the object pointed to by s1.
         A pointer to the resulting object is returned.
    */
    char *str1;
    const char *str2 = "n character copy";
    memmove( &str1, &str2, 12 );
    cout << "\nstr1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;

    /*
    int memcmp( const void *s1, const void *s2, size_t n );
         Compares the first n characters of the objects pointed to by s1 and
         s2. The function returns 0, less than 0 or greater than 0 if s1 is equal
         to, less than or greater than s2.
    */
    const char *str3 = "n character copy";
    const char *str4 = "n xxxxxxxxx copy";
    int temp = memcmp( &str3, &str4, 5 );
    cout << temp << endl;

    /*
    void *memchr( const void *s, int c, size_t n );
         Locates the first occurrence of c (converted to unsigned char) in the
         first n characters of the object pointed to by s. If c is found, a pointer
         to c in the object is returned. Otherwise, NULL is returned.
    */
    const char *s = "n character copy";
    cout << memchr( s,'r', 16 ) << endl;

    /*
    void *memset( void *s, int c, size_t n );
         Copies c (converted to unsigned char) into the first n characters of
         the object pointed to by s. A pointer to the result is returned.
    */
    char ss[15] = "BBBBBBBBBBBBBB";
    cout << ss << endl;
    cout << memset( ss, 'b', 7 );
    return 0;
}
