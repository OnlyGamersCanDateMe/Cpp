#include <iostream>
using namespace std;

int main( )
{
    int num = 0, first =0, last=0;
    
    //input
    cout <<"enter a num:" << endl;
    cin >> num;
    
    //logic
    first = num/100;
    
    last = num%10;
    
    cout << "first:" << first << endl;
    cout << "last:" << last << endl;
    
    return 0;
}
