//
// Created by houssem on 09/05/24.
//

#include <iostream>
using namespace std;

class enclosing{
private:
    int x;

    // start the nested class
    class nested{
    private:
        int y;
        void NestedFun(enclosing *e){
            cout << e->x << endl;
        }
    };
};

int main(){

    return 0;
}