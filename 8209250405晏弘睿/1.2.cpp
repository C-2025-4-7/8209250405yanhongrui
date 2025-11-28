#include <iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
	double num1, num2, num3;
	cout << "圆锥体积计算机" << endl;
	cout << "请输入圆锥的半径：";
	cin >> num1;
	cout << "请输入圆锥的高：";
	cin >> num2;
	cout << endl;
	num3 = (1.0 / 3.0) * PI * num1 * num1 * num2;
	cout << "圆锥的体积为：" << num3 << endl;



	return 0;
}