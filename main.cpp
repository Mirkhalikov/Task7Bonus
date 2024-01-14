#include <iostream>


int multiply(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	std::cin >> a;

	std::cin >> b;

	std::cout << multiply(a, b);
	return 0;
}