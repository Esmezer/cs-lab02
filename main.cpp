#include <iostream>
using namespace std;

int main() // you may type whatever you want
{
	cout << "Enter A and B:\n";
	int a, b;
	cin >> a >> b;
	int max = a > b ? a : b;
	cout << "A + B = " << a + b << '\n'
		<< "A - B = " << a - b << '\n'
		<< "A * B = " << a * b << '\n'
		<< "A / B = " << a / b << '\n'
		<< "MAX: " << max << '\n';

	return 0;
}