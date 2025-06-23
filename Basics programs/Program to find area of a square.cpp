#include <iostream>
using namespace std;

int main( )
{
    int length=0;
    int area=0;
    
    //input
    cout << "Enter side length of the square:" << endl;
    cin >> length;
    
    //cal
    area = length*length;
    cout << "Area:" << area << endl;

    return 0;
}
