#include <iostream>
using namespace std;

int main( )
{
    int num = 0;
    int total = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    
    
    for (int i=1; i<11; i++)
    {
        num++;
        total = total + num;
    }
    
    cout << "The sum of the next 10 numbers is:" << total << endl;
    
    return 0;
}

