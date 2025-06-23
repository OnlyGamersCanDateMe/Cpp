#include <iostream>

using namespace std;
  
void check(int num)
{
    if (num %2 == 0)
        cout << "Number is even" << endl;
    else
        cout << "Number is odd" << endl;
}

int main( ){
    int num;
    
    cout << "Enter an integer :";
    cin >> num;
    
    check(num);
    
    return 0;
}
