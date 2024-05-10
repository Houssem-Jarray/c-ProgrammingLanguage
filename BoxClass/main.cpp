//
// Created by houssem on 08/05/24.
//

#include <iostream>
using namespace std;

class Box{
private:
    int length;
    int breath;
    int height;
public:
    // Function that sets the dimensions
    void set_dimensions(int l, int b, int h){
        length = l;
        breath = b;
        height = h;
    }

    // Function to display the dimensions
    void show_data(){
        cout << "----------------------------------"<<endl;
        cout << "the box dimensions : " << endl;
        cout << "Height : " << height << endl;
        cout << "Breath : " << breath << endl;
        cout << "Length : " << length << endl;
    }
};

int main(){
    Box b1, b3;

    b1.set_dimensions(12,14,15);
    b1.show_data();

    Box b2 = b1;
    b2.show_data();

    b3 = b1;
    b3.show_data();
    return 0;
}