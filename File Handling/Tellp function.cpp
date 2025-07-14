#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    
    fout.open("my.txt", ios::app);
    
    int pos;
    
    pos = static_cast<int>(fout.tellp());
    
    cout << "Put pointer is at :" << pos << endl;
    
    fout << "Works";
    
    pos = static_cast<int>(fout.tellp());
    
    cout << "Put pointer after writing :" << pos << endl;
    
    fout.close();
    
    return 0;
}
