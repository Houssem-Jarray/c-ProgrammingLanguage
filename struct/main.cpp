//
// Created by houssem on 04/05/24.
//
#include <iostream>
using namespace std;

struct Mark {
    int num;
    void setNum(int m){
        num = m;
    }
    void desplay(){
        cout<<"num : "<<num<<endl;
    }
};

struct Student {
    int roll;
    Student(int x){roll = x;}
};

int main(){
    Mark mark;
    mark.setNum(20);
    mark.desplay();
    Student s2(10);
    cout << "student roll : " << s2.roll << endl;
    return 0;
}