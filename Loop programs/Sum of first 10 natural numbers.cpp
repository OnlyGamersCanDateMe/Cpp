//METHOD 1 USING FOR LOOP

#include <iostream>
using namespace std;

int main( )
{
    int sum=0;
    
    for (int i=1; i<11; i++)
    { sum += i;} //same as sum  = sum + i
    cout << "The sum of the first 10 natural numbers is:" << sum << endl;
    
    return 0;
}


//METHOD 2 USING WHILE LOOP

#include <iostream>
using namespace std;

int main( )
{
    int sum=0;
    int i = 1;
    while ( i<11)
    {
        sum += i;
        i++;
    }
    cout << "The sum of the first 10 natural numbers is:" << sum << endl;
    
    return 0;
}
