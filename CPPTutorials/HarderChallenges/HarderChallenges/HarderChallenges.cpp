
#include <iostream>

using namespace std;

int main()
{
	/*string fullName;
	cout << "Type your full name: ";
	getline (cin, fullName);
	cout << "Your name is: " << fullName; */

    int x = 5, y = 8;
    double z = 25.0;
    double w = 6.78;

   
    std::cout << "Max of " << x << " and " << y << " is: " << std::max(x, y) << std::endl;
    std::cout << "Square root of " << z << " is: " << std::sqrt(z) << std::endl;
    std::cout << "Rounded value of " << w << " is: " << std::round(w) << std::endl;
    double base = 2.0, exponent = 3.0;
    std::cout << base << " raised to the power of " << exponent << " is: " << std::pow(base, exponent) << std::endl;

    if (x > y) {
        std::cout << "x is greater than y." << std::endl;
    }
    else {
        std::cout << "y is greater than or equal to x." << std::endl;
    }

    if (w < 0) {
        std::cout << "w is negative." << std::endl;
    }
    else if (w > 0) {
        std::cout << "w is positive." << std::endl;
    }
    else {
        std::cout << "w is zero." << std::endl;
    }

    int option = 2;
    switch (option) {
    case 1:
        std::cout << "Option 1 selected." << std::endl;
        break;
    case 2:
        std::cout << "Option 2 selected." << std::endl;
        break;
    case 3:
        std::cout << "Option 3 selected." << std::endl;
        break;
    default:
        std::cout << "Invalid option." << std::endl;
    }

    int number = 7;
    std::cout << "The number is " << (number % 2 == 0 ? "even" : "odd") << std::endl;
    
    int count = 0;
   /* while (count < 5) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }*/
    
    do {
        std::cout << "Count: " << count << std::endl;
        count++;
    } while (count < 10);

    for (int count = 0; count < 5; count++) {
        std::cout << "Count: " << count << std::endl;
    }  
    
    int count2 = 0;
    while (count2 < 10) {
        std::cout << "Count: " << count2 << std::endl;
        if (count2 % 2 == 0) {
            count2++;
            continue;
        }
        if (count2 == 7) {
            break;
        }
        count2++;
    }

    int numbers[] = { 10, 20, 30, 40, 50 };
    std::cout << "Element at index 2: " << numbers[2] << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    string food = "Pizza";
    string& meal = food;

    cout << food << "\n";
    cout << meal << "\n";

    return 0;
}

