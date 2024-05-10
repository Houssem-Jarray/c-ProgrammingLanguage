//
// Created by houssem on 08/05/24.
//

#include <iostream>
using namespace std;

class Student{

public:
    static int count;
    Student(){
        count++;
    }
};

int Student::count = 0;

int main(){
    Student s1;
    cout << "Student number : " << s1.count<< endl;

    Student s2;
    cout << "Student number : " << s2.count << endl;

    Student s3;
    cout << "Student number : " << s3.count<< endl;

    return 0;
}