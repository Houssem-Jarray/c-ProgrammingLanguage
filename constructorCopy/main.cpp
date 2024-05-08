//
// Created by houssem on 08/05/24.
//

#include <iostream>
#include <cstring>

using namespace std;

class Student{
private:
    int rno;
    char name[50];
    double fee;
public:
    // default constructor
    Student(int rno, char name[], double fee);
    // user defined copy contructor
    Student(Student& student){
        this->rno = student.rno;
        strcpy(this->name, student.name);
        this->fee = student.fee;
    }
    void desplay();
};

void Student::desplay() {
    {
        cout << "Student : " << endl;
        cout << "\t rno : " << this->rno<<endl;
        cout << "\t name : " << this->name<<endl;
        cout << "\t fee : " << this->fee<<endl;
    }
}

Student::Student(int rno, char *name, double fee) {
    this->rno = rno;
    strcpy(this->name, name);
    this->fee = fee;
}

int main(){
    Student student1(1001, "houssem", 19.20);
    student1.desplay();
    cout << "----------------------------------" << endl;

    Student student2(student1);
    student2.desplay();
    cout << "----------------------------------" << endl;
    return 0;
}