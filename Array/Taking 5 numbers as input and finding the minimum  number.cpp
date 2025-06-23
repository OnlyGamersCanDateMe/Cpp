#include <iostream>
using namespace std;

int main() {
    
    int arr[5] ={0};
    
    for(int i=0; i<5; i++)  {
        cout << endl << "Enter the number" << i << ":";
        cin >> arr[i];
    }
        
    int min = arr[0];
    for (int i =1; i<5 ; i++)
    {
        min = arr[i];
    }
    
    cout << endl << "Min value is :" << min;
    
    return 0;
 
}
