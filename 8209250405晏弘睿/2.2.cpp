#include<iostream>
using namespace std;
int main() {
	float x,y;
	cout << "x=";
	cin >> x;
	if (x < 1 && 0 < x)
	{
		y = 3 - 2 * x;
		cout << "y=" << y << endl;

	}
	else if (1 <= x && x < 5)
	{
		y = 2 / 4 * x + 1;
		cout << "y=" << y << endl;

	}
	else if (5 <= x && x < 10)
	{
		y = x * x;
		cout << "y=" << y << endl;
	}
	else
	{
		cout << "x的值不在定义域范围之内" << endl;
	}
	return 0;
}