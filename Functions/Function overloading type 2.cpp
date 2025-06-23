#include <iostream>
#include <string>
using namespace std;
  
void add(int,int);
void add(int, int, int);


int main()
{
    add(3,4);
    add(1,4,8);
    
    return 0;

}

void add(int x, int y)
{
    cout << endl << "Sum is two numbers is" << x+y << endl;
}
void add(int x, int y, int z)
{
    cout << endl << "Sum is three numbers is" << x+y+z << endl;
}
