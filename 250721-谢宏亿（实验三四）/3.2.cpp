#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num) {
	for (int i = 2;i < sqrt(num)+1; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
void find_200_prime() {
	int count_prime = 0;
	int current_num = 2;
	while (count_prime <= 200) {
		if (is_prime(current_num)) {
			count_prime++;
			cout << current_num<<" ";
			if (count_prime % 10 == 0) {
				cout << endl;
			}
		}
		
		current_num++;
	}
}
int main() {
	find_200_prime();
}
