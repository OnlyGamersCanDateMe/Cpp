#include <iostream>
using namespace std;

int main() {
    
    int arr[ ] = {2,3,2,3,4,4,6,4,5,6,7,8};
    int arraysize = 0, maxo=0, count=1, maxcount=0;
    
    arraysize = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Length of array is:" << arraysize << endl;
    
    for (int i=0; i < arraysize; i++)
    {
        for(int j=i+1; j < arraysize; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        
        if (count > maxcount)
        {
            maxcount = count;
            maxo = arr[i];
        }
        count = 1;
    }
    cout << "most recurring element in the array is :" << maxo << endl;
    cout << "maximum time it is occuring is:" << maxcount << endl;
    
    
    return 0;
 
}
