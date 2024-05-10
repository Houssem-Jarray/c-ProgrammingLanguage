//
// Created by houssem on 09/05/24.
//

#include <iostream>
using namespace std;

enum Gender {
    Male = 0,
    Female = 1
};

enum roll_no {
    satya = 70,
    aakanskah = 73,
    sanket = 31,
    aniket = 05,
    avinash = 68,
    shreya = 47,
    nikita = 69,
};
enum class color {
    Green,
    Blue,
    Red
};
enum class people{
    Good,
    Bad
};

int main(){
    Gender gender = Female;
    if(gender == Male) cout << "Gender : Male" << endl;
    else cout << "Gender : Female" << endl;
    roll_no rn = sanket;
    cout << "roll_no : " << rn << endl;
    people p1 = people::Bad;
    cout << (p1 == people::Good)? "good" : "bad";
    return 0;
}