/*
void *memcpy( void *s1, const void *s2, size_t n );
     Copies n characters from the object pointed to by s2 into the object
     pointed to by s1. A pointer to the resulting object is returned.

void *memmove( void *s1, const void *s2, size_t n );
     Copies n characters from the object pointed to by s2 into the object
     pointed to by s1. The copy is performed as if the characters were
     first copied from the object pointed to by s2 into a temporary array
     and then from the temporary array into the object pointed to by s1.
     A pointer to the resulting object is returned.

int memcmp( const void *s1, const void *s2, size_t n );
     Compares the first n characters of the objects pointed to by s1 and
     s2. The function returns 0, less than 0 or greater than 0 if s1 is equal
     to, less than or greater than s2.

void *memchr( const void *s, int c, size_t n );
     Locates the first occurrence of c (converted to unsigned char) in the
     first n characters of the object pointed to by s. If c is found, a pointer
     to c in the object is returned. Otherwise, NULL is returned.

void *memset( void *s, int c, size_t n );
     Copies c (converted to unsigned char) into the first n characters of
     the object pointed to by s. A pointer to the result is returned.
*/

#include <iostream>
#include <string.h>
using namespace std;
int main(){



    return 0;
}
