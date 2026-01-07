#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "x=" << x << '\n';
		cout << "y=" << y << '\n';
	}
};
int main() {
	Point p1(60, 80);
	p1.setPoint(10, 20);
	p1.display();
}