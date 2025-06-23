#include <iostream>
using namespace std;

int main() {
    
    int arr[ ] = {2,3,4,5,6,7,8};
    int arraysize = 0;
    
    arraysize = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Length of array is:" << arraysize;
    
    //sorting
    for (int j=0; j< arraysize-1; j++)
    {
    
    for (int i=0; i< arraysize-1; i++)
    {
        if(arr[i]< arr[i+1])
        {
            int temp = 0;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
        
    }
    
    cout << endl << "2nd largest value is:" << arr[1];
        
    return 0;
 
}
