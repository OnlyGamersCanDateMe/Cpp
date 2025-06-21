//
//  Program to  swap two numbers.cpp
//  
//
//  Created by Shivam Mishra on 21/06/25.
//

#include<iostream>
using namespace std;


int main()
{
    int var1= 10, var2 = 20;
    //swap
    int temp = 0;
    
    temp = var1;
    
    var1 = var2;
    var2= temp;
    
    cout << "var1" << "\t"<< var1 <<endl;
    cout << "var2" << "\t" <<var2 << endl;
    
    
    return 0;
}
