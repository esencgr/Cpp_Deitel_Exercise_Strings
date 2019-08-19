/*
Write a program that inputs a telephone number as a string in the form (555) 555-5555. The program should use function
strtok to extract the area code as a token, the first three digits of the phone number as a token, and the last four digits of the
phone number as a token. The seven digits of the phone number should be concatenated into one string. The program should convert
the area code string to int and convert the phone number string to long. Both the area code and the phone number should be
printed.
*/
#include <iostream>
#include <ctime>
#include <string.h>
#include <cstdlib>
using namespace std;
#define SIZE 20

void print_latin( const char * );

int main( int argc, char const *argv[] ){

    char phone_number[ SIZE ] = { '\0' }, p[ SIZE ], *token_ptr;
    int area_code;
    long phone;
    
    cout << "Enter a phone number in the form (555) 555-5555:\n";
    cin.getline( p, SIZE );

    area_code = atoi( strtok( p, "()" ) );

    token_ptr =  strtok ( 0, "-" );
    strcpy( phone_number, token_ptr );
    token_ptr = strtok ( 0, "" );
    strcat( phone_number, token_ptr );
    phone = atol ( phone_number );

    cout << "\nThe integer area code is " << area_code
         << "\nThe long integer phone number is " << phone << endl;

    return 0;
}
