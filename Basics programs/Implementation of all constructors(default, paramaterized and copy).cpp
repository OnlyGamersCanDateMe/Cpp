#include<iostream>
#include<string>

using namespace std;

class mobile
{
private:
    string name;
    int RAM;
    string processor;
    int battery;
    
public:
    mobile(string name_a = "Null", int RAM_a = 0, string processor_a = "Null", int battery_a =0)
    {
        name = name_a;
        RAM = RAM_a;
        processor = processor_a;
        battery = battery_a;
        
    }
    
    mobile(mobile & mob)
    {
        name = mob.name;
        RAM = mob.RAM;
        processor = mob.processor;
        battery = mob.battery;
    }
    
    void getMobileData( );
};

void mobile::getMobileData()
{
    cout << endl << "Name:" << name << endl;
    cout << endl << "RAM:" << RAM << endl;
    cout << endl << "Processor:" << processor << endl;
    cout << endl << "Battery:" << battery << endl;
    
}

int main( )
{
    mobile sony;
    
    mobile sony2("Sony1111", 32,"Snapdragon", 4000);
    
    mobile sony3(sony2);
    
    sony.getMobileData();
    sony2.getMobileData();
    sony3.getMobileData();
    
    return 0;
    }

