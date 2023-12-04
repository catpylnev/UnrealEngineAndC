// OOPchallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Dog {
public: 
    // Properties (State)
    string breed;
    string color;
    double height;
    double weight;

    // Constructor to initialize properties
    Dog(string breed, string color, double height, double weight) :
        breed(breed), color(color), height(height), weight(weight) {}
     
    //Methods (Behavior)
    void shake() {
        cout << "Dog is shaking" << endl;
    }

    void sit() {
        cout << "Dog is sitting" << endl;
    }

    void layDown() {
        cout << "Dog is laying down" << endl;
    }
};

int main()
{ //instance of dog given by image
    Dog myDog("Hound", "Brown", 2.0, 60.0);

    //methods of dog instance
    myDog.shake();
    myDog.sit();
    myDog.layDown();

    //properties of dog instance
    cout << "Breed: " << myDog.breed << endl;
    cout << "Color: " << myDog.color << endl;
    cout << "Height: " << myDog.height << " feet" << endl;
    cout << "Weight: " << myDog.weight << " pounds " << endl;

    return 0;
}