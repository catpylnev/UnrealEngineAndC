#include <iostream>

using namespace std;

int main()
{
	int add = 1 + 4;
	int sub = 5 - 1;
	int mult = 5 * 5;
	int div = 10 / 2;
	int inc = 5;
	++inc;

	cout << add << endl;
	cout << sub << endl;
	cout << mult << endl;
	cout << div << endl;
	cout << inc << endl;
	
	int x = 5;
	int y = 3;
	cout << (x > y) << endl;
	cout << (x == y) << endl;
	cout << (x != y) << endl;
	cout << (x <= y) << endl;

	x += 3;
	cout << x << endl;
	x &= 3;
	cout << x << endl;
	x <<= 2;
	cout << x << endl;

	return 0;

}