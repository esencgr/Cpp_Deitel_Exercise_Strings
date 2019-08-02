/* using of gets, getchar, puts, putchar, sprintf and sscanf standart
   ınput output functions..

   int getchar( void ); 
              Inputs the next character from the standard input and returns it as an integer.
   char *fgets( char *s, int n, FILE *stream);
              Inputs characters from the specified stream into the array s until a newline or
              end-of-file character is encountered, or until n - 1 bytes are read. ın this chapter,
              we specify the stream as stdin—the standard input stream, which is typically used to
              read characters from the keyboard. A terminating null character is appended to the
              array. Returns the string that was read into s.
   int putchar( int c );
              Prints the character stored in c and returns it as an integer.
   int puts( const char *s );
              Prints the string s followed by a newline character. Returns a non-zero integer if
              successful, or EOF if an error occurs.
   int sprintf( char *s, const char *format, ... );
              Equivalent to printf, except the output is stored in the array s instead of printed
              on the screen. Returns the number of characters written to s, or EOF if an error occurs.
   int sscanf( char *s, const char *format, ... );
              Equivalent to scanf, except the input is read from the arrays rather than from the eyboard.
              Returns the number of items successfully read by the function, or EOF if an error occurs.
*/
#include <iostream>
#include <stdio.h>
using namespace std;

void reverse( char* );
void print( char* );

int main(){

    // usage of getchar and puts
    char str[ 80 ];
    print( str );

    // usage of gets and putchar
    char str1[ 80 ];
    cout << "Enter string : ";
    gets( str1 );
    cout << "Reverse string : ";
    reverse( str1 );

    // usage of sprintf
    char s[ 80 ];
    int x;
    double y;
    cout << "\n\nEnter int and double type value : ";
    cin >> x;
    cin >> y;
    sprintf( s, "\ninteger : %d\ndouble : %0.9f ", x, y );
    cout << "\nThe array include : " << s << endl;

    // usage of sscanf
    const char s1[ ] = " 31289 90.8766";
    int z;
    double t;
    sscanf( s1, "%d%lf", &z, &t );
    cout <<  "\nThe array include : " << endl;
    cout << "\ninteger : " << z << "\ndouble : " <<  t << endl;

    return 0;
}

// usage of getchar and puts
void print( char string[ 80 ] ){
    char ch;
    int i = 0;

    cout << "Enter string : ";
    ch = getchar();
    while ( ch != '\n'){
        string[ i++ ] = ch;
        ch = getchar();
    }

    string[ i ] = '\0';            //  add null in the end of string
    puts( "Entered string : " );
    puts( string );
}

// usage of gets and putchar
void reverse( char* s_ptr1 ){
    if ( s_ptr1[ 0 ] == '\0')
        return;
    else{
        reverse( &s_ptr1[ 1 ] );
        putchar( s_ptr1[ 0 ] );
    }
}
