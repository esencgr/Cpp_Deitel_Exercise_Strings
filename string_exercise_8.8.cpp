/*
(Converting Strings to Floating Point for Calculations)
 Write a program that inputs four strings that represent floating-point values,
 converts the strings to double values, sums the values and prints the total of
 --the four values.
*/
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
#define SIZE 5
int main(){
    char str[ SIZE ];
    double sum = 0;
    for ( int i = 0; i < 4; i++ ){
        cin >> str;
        sum += atof( str );
    }
    cout << "sum = " << sum << endl;

    return 0;
}
