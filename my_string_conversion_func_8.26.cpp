/*
conversion from string to integer and double and ..
** double atof( const char *nPtr );
      Converts the string nPtr to double.
** int atoi( const char *nPtr );
      Converts the string nPtr to int.
** long atol( const char *nPtr );
      Converts the string nPtr to long int.
** double strtod( const char *nPtr, char **endPtr );
      Converts the string nPtr to double.
** long strtol( const char *nPtr, char **endPtr, int base );
      Converts the string nPtr to long.
** unsigned long strtoul( const char *nPtr, char **endPtr, int base );
      Converts the string nPtr to unsigned long
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;

int my_atoi( const char * );
long my_atol( const char * );
double my_atof( const char * );

void copy1( char*, const char*);
double my_strtod( const char *, char ** );

int main(){

    int i = my_atoi("2356");
    cout << " \"2356\" string is conversion int type that " << i << endl;

    long int l = my_atol("10000000");
    cout << " \"10000000\" string is conversion long type that " << l << endl;

    double d = my_atof("49.6958");
    cout << " \"49.6958\" string is conversion double type that " << d << endl;

    const char *str1 = "51.2?****";
    char *extra_ptr1;
    cout << "original string : " << str1 << endl;
    double x = my_strtod( str1, &extra_ptr1 );
    cout << "long int value  : " << x << endl;
    cout << "extra string    : " << extra_ptr1 << endl << endl;

    return 0;
}

int my_atoi( const char *n_ptr ){
    int len = strlen( n_ptr );
    int num = 0;
    for ( ; *n_ptr != '\0'; *n_ptr++){
        num += (( int )( *n_ptr ) - 48) * pow(10, len -1 );
        len -= 1;
    }
    return num;
}

long int my_atol( const char *n_ptr ){
    int len = strlen( n_ptr );
    long int num = 0;
    for ( ; *n_ptr != '\0'; *n_ptr++){
        num += (( long int )( *n_ptr ) - 48) * pow(10, len-1);
        len -= 1;
    }
    return num;
}

double my_atof( const char *n_ptr ){
    double num = 0.0,  num1 = 0.0;
    int len = strlen ( n_ptr ), count = 0;
    int point_loc = len;
    for ( ; *n_ptr != '\0'; *n_ptr++, count++ ){
        if ( *n_ptr == '.')
            point_loc = count;
        if ( count < point_loc ){
            num *= 10;
            num += (( double)( *n_ptr ) - 48);
        }
        else if ( count > point_loc )
            num += (( double )( *n_ptr ) - 48) / (pow( 10, (count - point_loc)));
    }
    return (num);
}
double my_strtod( const char *n_ptr, char **end_ptr ){
    double num = 0.0;
    int count = 0;
    int point_loc = strlen( n_ptr );
    char *temp = (char*) malloc ( sizeof(char) * sizeof(* n_ptr ) );
    copy1( temp, n_ptr );
    for ( ; *temp != '\0'; *temp++, count++ ){
        if ( isdigit( *temp ) || *temp == '.'){
            if ( *temp == '.')
                point_loc = count;
            if ( count < point_loc ){
                num *= 10;
                num += (( double)( *temp ) - 48);
            }
            else if ( count > point_loc )
                num += (( double )( *temp ) - 48) / (pow( 10, (count - point_loc)));
        }
        else{
            for ( ; *temp != '\0'; temp++, *end_ptr++ )
                *end_ptr = temp;
        }
    }
    return num;
}
// copying the s1 to s2 with pointer notation
void copy1( char *s1, const char *s2){
    for ( ; ( *s1 = *s2 ) != '\0'; s1++ ,s2++)
        ;
}
