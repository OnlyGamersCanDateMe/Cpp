
#include <iostream>
using namespace std;

int main( )
{
    int divisor=0, dividend= 0;
    int quotient=0, remainder=0;
    
    //input
    cout << "Enter divisor:" <<endl;
    cin >> divisor;
    
    cout << "Enter dividend:" << endl;
    cin >> dividend;
    
    //cal
    quotient = dividend/divisor;
    remainder = dividend % divisor;
    
    //print
    cout <<"quotient:" << quotient;
    cout << "remainder:" <<remainder;
    
    
    return 0;
}

