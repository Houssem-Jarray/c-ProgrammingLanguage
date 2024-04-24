//
// Created by houssem on 24/04/24.
//

#include <iostream>
using namespace std;

class GFG{
    int i;
public:
    // construction
    GFG(){
        i = 0;
        cout << "Inside constructor"<< endl;
    }

    // deconstructor
    ~GFG(){
        cout << "Inside deconstructor" << endl;
    }
};

int main(){
    int x = 0;
    if (x==0){
        static GFG gfg;
    }
    cout << "End of main " << endl;
    return 0;
}