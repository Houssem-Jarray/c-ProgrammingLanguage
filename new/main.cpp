//
// Created by houssem on 05/05/24.
//

#include <iostream>
#include <memory>

using namespace std;

// custom user type defined
typedef struct Cust {
    int p;
    Cust(int q) :p(q){}
    Cust() = default;
};

int main(){
    int* ptr =  new int;
    cout << "ptr : " << ptr << endl;
    cout << "*ptr : " << *ptr << endl;

    int* p = new int(25);
    float* q = new float(75.57);

    Cust* cust1 = new Cust;

    cust1 = new Cust();

    Cust* cust2 = new Cust(5);

    cout << "*p : " << *p << endl;
    cout << "*q : " << *q << endl;
    cout << "cust1 : " << cust1->p << endl;
    cout << "cust2 : " << cust2->p << endl;
    return 0;
}