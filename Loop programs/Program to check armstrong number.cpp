#include <iostream>
using namespace std;
  
bool isArmstrong(int num)
{
    int original = num;
    int sum = 0;
    
    while (num > 0)
    {
        int digit = num%10;
        sum+=  digit*digit*digit;
        num/= 10;
    }
    return sum == original;
}

int main( ){
    int number;
    cout << "Enter a 3 digit number:";
    cin >> number;
    
    if (isArmstrong(number))
        cout << number << "is an armstrong number" << endl;
    else
        cout << number << "is not an armstrong number" << endl;
    return 0;
}
