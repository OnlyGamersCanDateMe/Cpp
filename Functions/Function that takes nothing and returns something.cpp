#include <iostream>
#include <string>
using namespace std;
  
int fun(void);

int main()
{
    int value= 0;
    
    value = fun( );
    
    cout << "Value is" << value;
    return 0;

}

int fun (void)
{
    return 10;
}
