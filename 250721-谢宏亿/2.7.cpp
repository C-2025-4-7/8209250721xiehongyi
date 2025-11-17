#include<iostream>
int main() {
	for (int i = 1; i <= 5; i += 1) {
		for (int j = 1; j <= i; j += 1) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}