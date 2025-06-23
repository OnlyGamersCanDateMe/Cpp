#include <iostream>
#include <string>
using namespace std;

int main()
{
    string var1= " ";
    
    cout << endl <<  "Enter a string" << endl;
    getline(cin, var1);
    
    cout << endl;
   //logic
    
    for (int i= var1.size(); i>=0; i--)
    {
        cout << var1[i];
        
    }
    
    return 0;

}
