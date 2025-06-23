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
    
    if (var1.compare(var2)==0)
    {
        cout << endl << "Both the string are same";
    }
    else
        cout << "Not same";
    
    return 0;

}
