//
// Created by houssem on 25/04/24.
//

#include <iostream>
using namespace std;

// base class animal
class Animal{
public:
    virtual void speak() const{
        cout << "animal speak" << endl;
    }
};

// derived class dog from animal
class Dog: public Animal{
public:
    void speak() const override{
        cout << "dog barks" << endl;
    }
};

// derived class cat from animal
class Cat: public Animal{
public:
    void speak() const override{
        cout << "Cat meows" << endl;
    }
};


int main(){
    Animal* animalPtr = new Dog();

    // Dynamic casting animalPtr
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);

    // check if dogPtr exist
    if (dogPtr){
        cout << "successful casting animalPtr to dogPtr" << endl;
    } else {
        cout << "error casting dog" << endl;
    }

    Cat* catPtr = dynamic_cast<Cat*>(animalPtr);

    if (catPtr){
        cout << "successful casting animalPtr to catPtr" << endl;
    } else {
        cout << "error casting cat" << endl;
    }


    return 0;
}