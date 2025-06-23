#include <iostream>
using namespace std;

int main()
{
    int num=0, factorial=1;
    
    cout << "enter the number" << endl;
    cin >> num;
    
    for (int i=num; i>0; i--)
    {
        factorial = factorial * i;
    }
    
    cout <<  "the factorial is:" << factorial << endl;
    
    return 0;
}
