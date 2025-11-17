#include<iostream>
int main() {
	double num1, num2;
	char a;
	double result;
	std::cout << "请输入第一个数" << std::endl;
	std::cin >> num1;
	std::cout << "请输入运算符（+ - * / %）" << std::endl;
	std::cin >> a;
	std::cout << "请输入第二个数" << std::endl;
	std::cin >> num2;

	int intnum1 = (int)num1;
	int intnum2 = (int)num2;

	bool valid = true;
	switch (a) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
		}
		else {
			std::cout << "除数不能为0" << std::endl;
			valid = false;
		}
		break;
	case '%':
		
		if (intnum2 != 0) {
			result = intnum1 % intnum2;
		}
		else {
			std::cout << "除数不能为0" << std::endl;
			valid = false;
		}
		break;
	default:
		std::cout << "非法运算符" << std::endl;
		break;
	}
	if (valid) {
		std::cout << num1 << a << num2 << "= " << result << std::endl;
	}
}