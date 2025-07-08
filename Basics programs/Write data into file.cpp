#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;          //create stream
    
    fout.open("ui.txt");    //load file in RAM
    
    fout << "User";         //writing data into file
    
    fout.close();           //closing the file
    
    return 0;
}


