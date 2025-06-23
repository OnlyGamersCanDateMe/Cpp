#include <iostream>
using namespace std;

int main() {
    
    int arr[ ] = {12,8,15,6,2,9,1};
    int arraysize = 0, sum=0, multiplication=1;
    
    arraysize = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Length of array is:" << arraysize;
    
    for (int i=0;i<arraysize; i++)
    {
        sum = sum + arr[i];
        multiplication= multiplication * arr[i];
    }
    cout << endl << "sum:" << sum;
    cout << endl << "multiplication" << multiplication;

    return 0;
 
}
