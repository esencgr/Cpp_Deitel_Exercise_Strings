/*
(Printing Dates in Various Formats) Dates are commonly printed in several different formats in business
correspondence. Two of the more common formats are:
                07/21/1955 and July 21, 1955
Write a program that reads a date in the first format and prints that date in the second format.
*/
#include <iostream>
#include <string.h>

using namespace std;
int main(){
    const char *months[ 13 ] = { "", "January", "February", "March", "April",
                                 "May", "June", "July", "August", "September",
                                 "October", "November", "December" };

    int m, d, y;
    cin >> m;
    cin.ignore();
    cin >> d;
    cin.ignore();
    cin >> y;

    cout << "the day is : " << months[ m ] << " " << d << " " <<
         (( y < 50 ) ? ( y + 2000 ) : ( y + 1900 )) << endl;
    
    return 0;
}
