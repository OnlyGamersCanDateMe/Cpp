
#include <iostream>
using namespace std;

int main( )
{
    char ch=0;
    
    cout <<"Enter a character" << endl;
    cin >> ch;
    
    if (ch>='A' && ch<='Z'){
        cout << "Uppercase Letter" << endl;
        }
    else if(ch>='a' && ch<='z'){
        cout << "Lowercase Letter" << endl;
    }
    else
        cout << "invalid input" << "\t";
    
    return 0;
}
