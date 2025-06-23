#include <iostream>
#include <string>
using namespace std;

int main()
{
    string var1= " ", var2 = " ";
    
    cout << endl <<  "Enter a string" << endl;
    getline(cin, var1);
    
    cout << endl <<  "Enter another string" << endl;
    getline(cin, var2);
    
    var1.swap(var2);
    
    cout << "var1 :" << var1 <<  endl;
    cout << "var2 :" << var2 <<  endl;
    
    
    return 0;

}
