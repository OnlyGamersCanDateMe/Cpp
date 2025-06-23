#include <iostream>
using namespace std;

int main( )
{
    int num =0;
    
    //input
    
    cout <<  "Enter a number:" << endl;
    cin >> num;
    
    //condition
    if(num%2==0)
        cout << "number is even" << "\t";
    else
        cout << "number is odd" <<"\t";
    

    return 0;
}
