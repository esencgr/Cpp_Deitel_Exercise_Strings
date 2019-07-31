/* compare string functions. strcmp, strncmp  */
/* this functions are compares two string */
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){

    const char *s1 = "mutlu yeni yıllar";
    const char *s2 = "mutlu yeni yıllar";
    const char *s3 = "mutlu tatiller";

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    cout << "s3 : " << s3 << endl << endl;

    cout << "s1 & s2 : " << strcmp( s1, s2 ) << endl;
    cout << "s1 & s3 : " << strcmp( s1, s3 ) << endl;
    cout << "s3 & s1 : " << strcmp( s3, s1 ) << endl << endl;

    int result = strcmp( s1, s3 );

    if ( result == 0 )
        cout << s1 << " == " << s3 << endl;
    else if ( result < 0 )
        cout << s1 << " < " << s3 << endl;
    else
        cout << s1 << " > " << s3 << endl;

    cout << "\ns1 & s2 : " << strncmp( s1, s2, 6 ) << endl;
    cout << "s1 & s3 : " << strncmp( s1, s3, 7 ) << endl;
    cout << "s3 & s1 : " << strncmp( s3, s1, 7 ) << endl;

    return 0;
}
