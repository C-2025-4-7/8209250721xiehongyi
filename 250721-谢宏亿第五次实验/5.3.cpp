#include<iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void SetCuboid() {
		cin >> length >> width >> height;
	}
	double CalculateV() {
		return length * width * height ;
	}
	void ShowV() {
		cout << CalculateV() << '\n';
	}
};
int main() {
	Cuboid C1,C2,C3;
	cout << "请输入第一个长方体的长、宽、高：" << '\n';
	C1.SetCuboid(); 
	cout << "请输入第二个长方体的长、宽、高：" << '\n';
	C2.SetCuboid(); 
	cout << "请输入第三个长方体的长、宽、高：" << '\n';
	C3.SetCuboid(); 
	cout << "体积分别为:"<<"\n";
	C1.ShowV();
	C2.ShowV();
	C3.ShowV();
	return 0;
}