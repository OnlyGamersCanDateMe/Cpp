#include <iostream>
using namespace std;

int main() {
    
    int arr[5][5], sum=0;
    
    //input
    
    for(int i=0; i<5; i++)//row
    {
        for (int j = 0; j<5; j++)//column
        {
            cout << endl << "Row is :" << i << "column is: " << j << "Enter a value:";
            cin >> arr [i][j];
        }
    }
    //add
    for(int i=0; i<5; i++)//row
    {
        for (int j = 0; j<5; j++)//column
        {
            sum += arr[i][j];
        }
    }
    cout << "sum is :" << sum ;
    
    return 0;
 
}
