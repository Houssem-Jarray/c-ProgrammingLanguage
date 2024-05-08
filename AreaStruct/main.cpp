//
// Created by houssem on 04/05/24.
//

#include <iostream>
#include <math.h>

using namespace std;

typedef struct Point {
    int x;
    int y;
};

typedef struct Square{
    struct Point left;
    struct Point right;
};

int SquareArea(Square square){
    int area;
    int cote1 = abs(square.left.y - square.left.x);
    int cote2 = abs(square.right.y - square.right.x);
    area = cote1 * cote2;
    return area;
}

int main(){
    Square square;
    square.right.x = 0;
    square.left.x = 0;
    square.right.y = 4;
    square.left.y = 4;

    int res = SquareArea(square);
    cout << "Square area : " << res << endl;
    return 0;
}