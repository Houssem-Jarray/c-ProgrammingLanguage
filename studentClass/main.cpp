//
// Created by houssem on 08/05/24.
//

#include <iostream>
using namespace std;

class Student{
private:
    // by default variables are private
    int rno;
    char name[50];
    double fee;
public:
    Student(){
        cout << "Enter the rno : ";
        cin >> rno;
        cout << "Enter the student's name : ";
        cin >> name;
        cout << "Enter the student's fee : ";
        cin >> fee;
    }

    void desplay(){
        cout << "Student : " << endl;
        cout << "\t" << rno << endl;
        cout << "\t" << name << endl;
        cout << "\t" << fee << endl;
    }


};
int main(){
    Student student;
    student.desplay();
    return 0;
}