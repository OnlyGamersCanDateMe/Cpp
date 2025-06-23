#include <iostream>
#include <string>
using namespace std;
  
int fun(int);

int main()
{
    int value= 0;
    
    cout << "Enter something" << endl;
    cin >> value;
    
    value = fun(value);
    
    cout << "Value is" << value << endl;
    
    return 0;

}

int fun (int x)
{
    x= x*x;
    return x;
}
