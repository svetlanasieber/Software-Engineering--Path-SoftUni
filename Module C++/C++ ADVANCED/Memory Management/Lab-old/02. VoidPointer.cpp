#include <iostream>

void print(int n) {
	std::cout << n << std::endl;
}

int main() {
	using namespace std;

	int number = 42;
	char cStr[] = "I'm a C-String";
	char* otherCStr = "I'm another C-String"; // NOTE: ISO C++11 does not allow conversion from string literal to 'char *'

	int * numberPtr = &number;
	void* p;

	p = numberPtr;
	cout << p << endl;

	p = &number;
	cout << p << endl;

	p = cStr;
	cout << cStr << " " << p << endl; // cStr will be printed as a string, p as an address

	p = otherCStr;
	cout << otherCStr << " " << p << endl; // otherCStr will be printed as a string, p as an address

	p = print; // NOTE: error: invalid conversion from 'void (*)(int)' to 'void*' [-fpermissive]
	cout << p << endl; // address to the function

	return 0;
}
