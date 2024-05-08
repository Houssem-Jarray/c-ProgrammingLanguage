#include <iostream>

using namespace std;

class Test {
public:
    Test(){ // constructor
        cout << "Execute constructor" << endl;
    }
private:
    ~Test(){ // private destructor
        cout << "execute destructor"  <<endl;
    };

public:
    friend void destructTest(Test*);
};

void destructTest(Test* t){
    delete t;
}


int main()
{
    Test* t = new Test;
    destructTest(t);
    return 0;
}
