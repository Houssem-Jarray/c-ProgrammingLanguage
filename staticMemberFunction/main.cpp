//
// Created by houssem on 24/04/24.
//

#include <iostream>

using namespace std;

class GFG{
    int i =0;
public:
    static void printMSG(){cout <<"static member function";}
};

int main(){
    GFG::printMSG();
    return 0;
}