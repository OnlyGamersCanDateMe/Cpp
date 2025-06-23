#include <iostream>
using namespace std;

int main( )
{
    char let=0;
    
    //input
    cout << "Enter the character:" << endl;
    cin >> let;
    
    //calculation
    if (let== 'a' || let== 'e' || let== 'i' || let== 'o' ||let=='u')
        cout << "Entered character is a vowel" << "\t";
    else
        cout << "Entered character is not a vowel" << "\t";
    
    return 0;
}

