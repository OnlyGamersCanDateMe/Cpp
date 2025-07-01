#include<iostream>
#include<string>

using namespace std;

class rectangle
{
public:
    int length;
    int breadth;
    
    void area()
    {
        cout << "Area of rectangle:" << length*breadth << endl;
    }
};
    
    class cuboid : public rectangle
    {
    public:
        int height;
        
        void volume()
        {
            cout << "Volume of Cuboid:" << length*breadth*height << endl;
        }
    };


int main()
{
    cuboid c;
    c.length =10; c.breadth = 20; c.height = 30;
    
    c.area( );
    c.volume();
    
    return 0;
}

