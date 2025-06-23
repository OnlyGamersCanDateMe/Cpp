//METHOD 1

#include <iostream>
using namespace std;

int main( )
{
    int num = 0, first =0, last=0;
    int mid=0;
    
    //input
    
    
    cout <<"enter a num:" << endl;
    cin >> num;
    
    //logic
    
    
    first = num/100;

    mid = (num/10)%10; /* divide the number by 10 to get the quotient and then divide by 10 to find the remainder which is the middle digit*/

    last = num%10;
    
    
    cout << "first:" << first << endl;
    
    cout <<"mid:" <<mid << endl;
    
    cout << "last:" << last << endl;
   

    return 0;
}


// METHOD 2
#include <iostream>
using namespace std;

int main( )
{
    int num = 0, first =0, last=0;
    int mid=0;
    
    //input
    
    
    cout <<"enter a num:" << endl;
    cin >> num;
    
    //logic
    
    
    first = num/100;

    mid = (num%100)/10; /* divide the number by 100 to get the remainder and then divide by 10 to get the quotient which is the middle digit*/

    last = num%10;
    
    
    cout << "first:" << first << endl;
    
    cout <<"mid:" <<mid << endl;
    
    cout << "last:" << last << endl;
   

    return 0;
}
