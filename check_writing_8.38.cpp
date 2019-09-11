/*
(Writing the Word Equivalent of a Check Amount) Continuing the discussion of the previous example, we
reiterate the importance of designing check-writing systems to prevent alteration of check amounts.

One common security method requires that the check amount be written both in numbers, and “spelled
out” in words as well.

Even if someone is able to alter the numerical amount of the check, it is extremely difficult to change
the amount in words. Many computerized check-writing systems do not print the amount of the check in
words. Perhaps the main reason for this omission is the fact that most high-level languages used in
commercial applications do not contain adequate string manipulation features.

Another reason is that the logic for writing word equivalents of check amounts is somewhat involved.
Write a program that inputs a numeric check amount and writes the word equivalent of the amount.

      For example, the amount 112.43 should be written as :
              ONE HUNDRED TWELVE and 43/100.

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main( ){

    const char *digit[ 10 ] = { "", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE" };
    const char *teens[ 10 ] = { "TEN", "ELEVEN", "TWELVE", "THIRTEEN","FOURTEEN", "FIFTEEN",
                                 "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINETEEN"};
    const char *tens[ 10 ] =  { "", "TEN", "TWENTY", "THIRTY", "FORTY", "FIFTY","SIXTY", "SEVENTY",
                                 "EIGHTY", "NINETY" };

    int dollars, cents, digit1, digit2;

    cout << "Enter the check amount (0.00 to 99.99): ";
    cin >> dollars;
    cin.ignore();
    cin >> cents;
    cout << "The check amount in words is :\n";

    if ( dollars < 10 )
        cout << digit[ dollars ] << ' ';

    else if ( dollars < 20 )
        cout << teens[ dollars - 10 ] << ' ';

    else{
        digit1 = dollars / 10;
        digit2 = dollars % 10;

        if ( !digit2 )
            cout << tens[ digit1 ] << ' ';
        else
            cout << tens[ digit1 ] << '-' << digit[ digit2 ] << ' ';
    }

    cout << "dollars and " << cents << "/100 " << " cents " << endl;
    return 0;
}
