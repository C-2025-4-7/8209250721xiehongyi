#include<iostream>

int main() {
	double price = 0.8;
	int count = 2;
	int day = 1;
	double total_cost = 0;
	while (count <= 100) {
		total_cost = total_cost + count * price;
		int next_count = count * 2;
		if (next_count > 100) {
			break;
		}
		count = next_count;
		day++;
	}
	double averge_cost = total_cost / day;
	std::cout << "总天数:" << day << std::endl;
	std::cout << "总花费:" << total_cost << std::endl;
	std::cout << "平均花费:" << averge_cost << std::endl;


}