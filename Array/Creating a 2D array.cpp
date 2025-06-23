#include <iostream>
using namespace std;

int main() {
    
    int arr[5][5];
    
    //input
    
    for(int i=0; i<5; i++)//row
    {
        for (int j = 0; j<5; j++)//column
        {
            cout << endl << "Row is :" << i << "column is: " << j << "Enter a value:";
            cin >> arr [i][j];
        }
    }
    //print
    for(int i=0; i<5; i++)//row
    {
        for (int j = 0; j<5; j++)//column
        {
            cout << endl << "Row is :" << i << "column is: " << j << "Value is :";
            cout << arr [i][j];
        }
    }
    
    return 0;
 
}
