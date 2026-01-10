#include<iostream>
using namespace std;
class Point
{
private:
	int x=60;
	int y=80;
public:
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;

	}
	void display() {
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;

	}

};
int main() {
	Point poi;
	int i;
	int j;
	cout << "ÇëÊäÈëiºÍj£º";
	cin >> i >> j;
	poi.setPoint(i, j);
	poi.display();
	return 0;
}