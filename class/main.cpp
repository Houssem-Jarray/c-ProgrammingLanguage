//
// Created by houssem on 06/05/24.
//

#include <iostream>

using namespace std;

class GFG{
public:
    void call_function(){
        print();
    }
    virtual void print(){
        cout << "printing the base class content."<<endl;
    }
};

class GFG1: public GFG{
public:
    void print(){
        cout << "printing the drived class content." << endl;
    }
};

class Car{
public:
    double calculeVitesse(float distance, float time){
        cout << 1e-3 << endl;
        double vitesse = (distance * 1e-3 * 60) / (time);
        return vitesse;
    }
    void desplay(float vitess){
        cout << "the car is currently at vitesse " << vitess << " km/h" << endl;
    }
};

int main(){

    GFG gfg;
    GFG1 gfg1;
    gfg.call_function();
    gfg1.call_function();
    float distance = 2000;
    float time = 60;
    Car* car = new Car;
    double vitesse = car->calculeVitesse(distance, time);
    car->desplay(vitesse);
    return 0;
}