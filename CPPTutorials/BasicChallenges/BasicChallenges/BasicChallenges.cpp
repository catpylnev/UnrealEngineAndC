#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World! \n";
    cout << "I am learning C++";
    char charVariable = 'A';
    int intVariable = 42;
    double doubleVariable = 3.14;
    bool boolVariable = true;
    std::string stringVariable = "Hello, World!";

    int anotherIntVariable = 100;
    double anotherDoubleVariable = 2.5;

    //return variables
    std::cout << "charVariable: " << charVariable << std::endl;
    std::cout << "intVariable: " << intVariable << std::endl;
    std::cout << "doubleVariable: " << doubleVariable << std::endl;
    std::cout << "boolVariable: " << (boolVariable ? "true" : "false") << std::endl;
    std::cout << "stringVariable: " << stringVariable << std::endl;

    std::cout << "anotherIntVariable: " << anotherIntVariable << std::endl;
    std::cout << "anotherDoubleVariable: " << anotherDoubleVariable << std::endl;

    const int myNum = 15;

    string name;
    cout << "Type your name: ";
    cin >> name;
    cout << "Your name is: " << name << std::endl;

    float floatNumber = 5.75;
    cout << floatNumber << std::endl;


    string firstName = "Catherine";
    string lastName = "Pylnev";
    string fullName = firstName + " " + lastName;
    cout << fullName << std::endl;

    string txt = "ABFUGBAJJNSVNJWNAGJG";
    cout << "The length of the txt string is: " << txt.length() << std::endl;

    string changeString = "Hello";
    cout << changeString[0] << std::endl;
    changeString[0] = 'J';
    cout << changeString << std::endl;

    return 0;
}