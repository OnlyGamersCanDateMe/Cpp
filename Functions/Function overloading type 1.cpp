#include <iostream>
#include <string>
using namespace std;
  
void add(int,int);
void add(float, float);
void add(string, string);

int main()
{
    add(3,4);
    add(3.3f, 4.4f);
    add("Greenland","Denmark");
    return 0;

}

void add(int x, int y)
{
    cout << endl << "Sum is" << x+y << endl;
}
void add(float x, float y)
{
    cout << endl << "Sum is" << x+y << endl;
}
void add(string x, string y)
{
    cout << endl << "Sum is" << x+y << endl;
}
