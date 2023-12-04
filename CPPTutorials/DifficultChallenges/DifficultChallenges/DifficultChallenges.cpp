#include <iostream>
#include <string>

using namespace std;

void aNewFunction() {
    cout << "This is my function!";
}

void functionWithoutArgument() {
    cout << "Function without argument called." << endl;
}

void functionWithParameters(int a, double b) {
    cout << "Function with parameters called. a = " << a << ", b = " << b << endl;
}

int add(int x, int y) {
    return x + y;
}

void modifyValue(int& value) {
    value *= 2;
}

int add(int x, int y, int z) {
    return x + y + z;
}

class Animal {
protected:
    string name;

public:
    Animal(const string& animalName) : name(animalName) {
        cout << "Animal constructor called with name: " << name << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
    }
};

class Mammal : public virtual Animal {
public:
    Mammal(const string& mammalName) : Animal(mammalName) {
        cout << "Mammal constructor called with name: " << name << endl;
    }

    void makeSound() {
        cout << "Mammal makes a sound." << endl;
    }
};

class Bird : public virtual Animal {
public:
    Bird(const string& birdName) : Animal(birdName) {
        cout << "Bird constructor called with name: " << name << endl;
    }

    void fly() {
        cout << "Bird flies." << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    Bat(const string& batName) : Animal(batName), Mammal(batName), Bird(batName) {
        cout << "Bat constructor called with name: " << name << endl;
    }

    void navigate() {
        cout << "Bat uses echolocation to navigate." << endl;
    }
};

class MyClass {
private:
    int privateVar;

public:
    int publicVar;

    MyClass(int value) : privateVar(value), publicVar(0) {
        cout << "Constructor inside class called with value: " << value << endl;
    }

    void display() {
        cout << "PrivateVar: " << privateVar << endl;
    }

    void outsideFunction();
    void modifyPrivateVar(int newValue) {
        privateVar = newValue;
        cout << "PrivateVar modified to: " << newValue << endl;
    }
};

void MyClass::outsideFunction() {
    cout << "Outside Function called." << endl;
}

int main() {
    Bat bat("Flying Fox");

    string food = "Pizza";
    string* ptr = &food; //pointer variable, stores address of food

    cout << food << "\n"; //output value of food, Pizza
    cout << &food << "\n"; //output the memory address of food
    cout << ptr << "\n"; //output memory address of food with pointer
    cout << *ptr << "\n"; //Dereference, output value of food with the pointer

    aNewFunction();

    functionWithoutArgument();

    functionWithParameters(5, 3.14);

    int result = add(3, 7);
    cout << "Sum: " << result << endl;

    int valueToModify = 10;
    modifyValue(valueToModify);
    cout << "Modified Value: " << valueToModify << endl;

    int sum1 = add(1, 2, 3);

    cout << "Sum 1: " << sum1 << endl;

    MyClass obj1(10);
    MyClass obj2(20);

    obj1.display();
    obj2.display();

    obj1.modifyPrivateVar(5);
    obj1.display();
    obj1.outsideFunction();

    bat.displayInfo();
    bat.makeSound();
    bat.fly();
    bat.navigate();

    return 0;
}
