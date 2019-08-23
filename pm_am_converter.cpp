#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void convert_am_pm( char[] );

int main(){
    char str[ 12 ];
    cout << "\nEnter clock time : ";
    cin >> str;
    convert_am_pm( str );
    return 0;
}
void convert_am_pm( char s[ 12 ] ){
    int lenght = strlen( s );
    if ( s[ lenght - 2 ] == 'P' ){
        char hour[ 3 ];
        hour[ 0 ] = s[ 0 ];
        hour[ 1 ] = s[ 1 ];
        hour[ 2 ] = '\0';
        int h = atoi( hour );
        // atoi function :
              // int h = 0;
              // h += ( hour[ 0 ] - 48 ) * 10;
              // h += ( hour[ 1 ] - 48 )
        h += 12;
        s[ 0 ] = (char) 48 + ( h / 10 );
        s[ 1 ] = (char) 48 + ( h % 10 );
        s[ lenght - 2 ] = '\0';
        cout << "clock : " << s << endl;
    }
    else
        s[ lenght - 2 ] = '\0';
        cout << "clock : " << s << endl;
}
