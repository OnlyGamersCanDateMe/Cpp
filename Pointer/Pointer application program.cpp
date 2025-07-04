#include<iostream>
 
using namespace std;

class car
{
private:
    int weight;
    
public:
    void SetWeight(int w)
    {
        weight = w;
    }
    int GetWeight( )
    {
        return weight;
    }
};

class audi
{
private:
    int topspeed;
    car *ptr;
    
public:
    audi(int wght=0, int tspeed=0)
    {
        ptr = new car;
        ptr -> SetWeight(wght);
        topspeed = tspeed;
    }
    int getWeight()
    {
        return ptr -> GetWeight();
    }
    int getTSpeed()
    {
        return topspeed;
    }
    ~audi()
    {
        delete ptr;
    }
};

int main()
{
    audi a(3000,399);
    
    cout << "Weight of car =" << a.getWeight() << endl;
    
    cout << "Top speed of car =" << a.getTSpeed() << endl;
    
    return 0;
}
