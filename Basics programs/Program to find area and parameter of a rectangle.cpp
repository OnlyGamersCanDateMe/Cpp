//
//  Program to find area and parameter of a rectangle.cpp
//  
//
//  Created by Shivam Mishra on 21/06/25.
//

#include <iostream>
using namespace std;

int main( )
{
    int length = 0, breadth = 0;
    int area = 0, perimeter=  0;
    
    //input
    cout <<"Enter length:" <<endl;
    cin >> length;
    
    cout <<"Enter breadth:" <<endl;
    cin >> breadth;
    
    //cal
    area = length * breadth;
    cout <<"Area :" << area << endl;
    
    perimeter = 2*(length + breadth);
    cout << "perimeter:" << perimeter << endl;
    
    return 0;
}
