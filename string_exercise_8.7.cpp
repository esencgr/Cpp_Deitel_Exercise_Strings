/*
(Converting Strings to Integers for Calculations)
  Write a program that inputs four strings that represent integers, converts the
  strings to integers, sums the values and prints the total of the four values.
*/
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
#define SIZE 5
int main(){
    string str;
    int sum = 0;

    for ( int i = 0; i < 4; i++ ){
        cin >> str;
    }

    cout << "sum = " << sum << endl;

    return 0;
}
