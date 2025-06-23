#include <iostream>
using namespace std;

int main( )
{
    int num =0;
    
    //input
    
    cout <<  "Enter a number:" << endl;
    cin >> num;
    
    //condition
    if(num%3==0)
        cout << "number is a multiple of 3" << "\t";
    else
        cout << "number is not a multiple of 3"  << "\t";
    

    return 0;
}
