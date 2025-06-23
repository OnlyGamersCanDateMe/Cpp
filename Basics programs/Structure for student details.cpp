#include <iostream>
using namespace std;
  
struct student {
    string fullname;
    int rollno;
    float marks;
};

int main( ){
    student s1;
    
    s1.fullname = "Rajneesh Osho";
    s1.rollno = 404;
    s1.marks = 0;
    
    cout << "Student Details:" << endl;
    cout << "Name:" << s1.fullname << endl;
    cout << "Roll No:" << s1.rollno << endl;
    cout << "Marks:" << s1.marks << endl;
    
    return 0;
}
