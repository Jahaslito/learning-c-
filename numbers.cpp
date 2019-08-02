#include<iostream>
#include <string>

using namespace std;

int main()
{
	int input, quotient=0;
	string binary;
	cout << "Enter the decimal number that is to be converted: ";
	cin >> input;

	int arrayIndex = 0;
	while (quotient != 1) {
		quotient = input / 2;
		binary.append(to_string(input % 2));
		arrayIndex++;
		input = quotient;
	}
	binary.append("1");
	
	for (int i = arrayIndex; i >= 0; i--) {
		cout << binary[i];
	}
	return 0;
}