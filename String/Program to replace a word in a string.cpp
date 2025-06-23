#include <iostream>
#include <string>
using namespace std;

int main()
{
    string var1= " ", var2= " ", var3= " ";
    
    cout << endl <<  "Enter a string" << endl;
    getline(cin, var1);
    
    cout << endl <<  "Enter string to find" << endl;
    getline(cin, var2);
    
    cout << endl <<  "Enter string to replace" << endl;
    getline(cin, var3);
    
    
    while (var1.find(var2) != string::npos)
        var1.replace(var1.find(var2),var2.size(), var3);
    
    cout <<  var1;
    
    
    return 0;

}
