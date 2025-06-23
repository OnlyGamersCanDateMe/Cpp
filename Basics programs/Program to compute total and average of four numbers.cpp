//
//  Program to compute total and average of four numbers.cpp
//  
//
//  Created by Shivam Mishra on 21/06/25.
//

#include <iostream>
using namespace std;

int main( )
{
    int a=0, b=0, c=0, d=0;
    //input
    int total= 0;
    int average= 0;
    
    cout << "enter first number"<< endl;
    cin >> a;
    
    cout << "enter second number"<< endl;
    cin >> b;
    
    cout << "enter third number"<< endl;
    cin >> c;
    
    cout << "enter fourth number"<< endl;
    cin >> d;
    
    //cal
    
    total = a+b+c+d;
    average= (a+b+c+d)/4;
    
    //print
    
    cout <<"Total" << "\t" << total << endl;
    cout  <<"Average"<<"\t"<< average << endl;
    
    return 0;
}

