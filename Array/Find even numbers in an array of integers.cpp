#include <iostream>
using namespace std;

int main() {
    
    int arr[ ] = {12,8,15,6,2,9,1};
    int arraysize = 0;
    
    arraysize = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Length of array is:" << arraysize;
    
    for ( int i=0; i<arraysize; i++)
    {
        if(arr[i]%2 == 0)
        {
            cout << endl << arr[i];
        }
    }

    
    return 0;
 
}
