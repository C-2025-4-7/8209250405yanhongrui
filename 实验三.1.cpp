#include<iostream>
using namespace std;
void max(int x, int y,int &n,int &t) {
	
	int a = x, b = y;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	n = a;
	t = x * y / n;
}

int main()
{
	int x, y, n, t;
	cout << "请输入两个自然数" << endl;
	cin >> x >> y;
	max(x, y, n, t);
	cout << "最大公约数为：" << n << endl;
	cout << "最小公倍数为：" << t << endl;

}