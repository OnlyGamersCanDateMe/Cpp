#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    
    cout << "Enter first string" << endl;
    getline(cin,s1);
    
    cout << "Enter second string" << endl;
    getline(cin,s2);
    
    
    if (s1.length( ) == s2.length())
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not Equal";
    }
    return 0;

}
