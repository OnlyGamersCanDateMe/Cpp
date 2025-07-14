#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    char ch;

    fin.open("my.txt");

    if (!fin.is_open()) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    int pos = static_cast<int>(fin.tellg());
    cout << "Pos : " << pos << endl;

    fin >> ch;

    if (fin.fail()) {
        cout << "Failed to read character. File might be empty." << endl;
        fin.close();
        return 1;
    }

    pos = static_cast<int>(fin.tellg());
    cout << "Pos : " << pos << endl;

    fin.close();
    return 0;
}

