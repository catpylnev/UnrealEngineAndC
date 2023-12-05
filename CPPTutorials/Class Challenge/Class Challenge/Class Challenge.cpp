// Class Challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public: 
	Shape (string color) : color(color) {}

	virtual double getArea() const = 0;

protected:
		string color;
};

class Rectangle : public Shape {
public:
	Rectangle(string color, double height, double width) : Shape(color), height(height), width(width) {}

	double getArea() const override {
		return height * width;
	}

private: 
	double height;
	double width;
};

class Triangle : public Shape {
public:
	Triangle(string color, double base, double height) : Shape(color), base(base), height(height) {}

	double getArea() const override {
		return 0.5 * base * height;
	}

private: 
	double base;
	double height;
};

class Circle : public Shape {
public:
	Circle(string color, double radius) : Shape(color), radius(radius) {}

	double getArea() const override {
		return 3.14 * radius * radius;
	}

private:
	double radius;
};

int main()
{
	Rectangle rectangle("Blue", 4, 6);
	Triangle triangle("Red", 3, 5);
	Circle circle("Green", 2);

	cout << "Area of Rectange: " << rectangle.getArea() << endl;
	cout << "Area of Triangle: " << triangle.getArea() << endl;
	cout << "Area of Circle: " << circle.getArea() << endl;

	return 0;
}