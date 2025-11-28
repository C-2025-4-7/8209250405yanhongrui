#include<iostream>
using namespace std;
int main()
{
	int a, b;
	if (a <= 0 || b <= 0) {
		cout << "请输入正确的数" << endl;
	}
	cout << "请输入两个正整数：";
	cin >> a >> b;
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;

	}
	int gcd = a;
	int lcm = a * b / gcd;
	cout << "最大公约数：" << gcd << endl;
	cout << "最小公倍数：" << lcm << endl;







	return 0;
}