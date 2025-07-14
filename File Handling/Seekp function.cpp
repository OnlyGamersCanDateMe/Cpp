#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    char A[6] = "Academy";

    fout.open("my.txt",ios::in);

    
    
    fout.seekp(3, ios_base::beg);


    fout.write(A,6);


    fout.close();
    return 0;
}
