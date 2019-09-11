/*
(Check Protection)
Computers are frequently employed in check-writing systems such as payroll and accounts payable applications.
Many strange stories circulate regarding weekly paychecks being printed (by mistake) for amounts in excess of
$1 million.

Weird amounts are printed by computerized check-writing systems, because of human error or machine failure.
Systems designers build controls into their systems to prevent such erroneous checks from being issued.

Another serious problem is the intentional alteration of a check amount by someone who intends to cash a check
fraudulently. To prevent a dollar amount from being altered, most computerized check-writing systems employ a
technique called check protection. Checks designed for imprinting by computer contain a fixed number of spaces
in which the computer may print an amount.

Suppose a paycheck contains eight blank spaces in which the computer is supposed to print the amount of a weekly
paycheck. If the amount is large, then all eight of those spaces will be filled,

        For example:
           1,230.60 (check amount)
           --------
           12345678 (position numbers)

On the other hand, if the amount is less than $1000, then several of the spaces would ordinarily be left blank.

        For example:
              99.87
           --------
           12345678     contains three blank spaces..

If a check is printed with blank spaces, it is easier for someone to alter the amount of the check. To prevent a
check from being altered, many check-writing systems insert leading asterisks to protect the amount,

        As follows:
           ***99.87
           --------
           12345678

Write a program that inputs a dollar amount to be printed on a check and then prints the amount in check-protected
format with leading asterisks if necessary. Assume that nine spaces are available for printing an amount.

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main( ){
    double amount, base = 100000.00;
    int space = 0;

    cout << "Enter check amount : ";
    cin >> amount;

    cout << "The protected amount : $";
    while ( amount < base ){
        base /= 10;
        cout << "*";
    }

    cout  << amount << endl;

    return 0;
}
