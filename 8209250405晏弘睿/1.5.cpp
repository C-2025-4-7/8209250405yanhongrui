#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f;//华氏度
	cout << "请输入华氏度：";
	cin >> f;
	float c;//摄氏度
	c = (f - 32.00) / 1.80;
	cout << fixed << setprecision(2);
	cout << "转换为摄氏度为：" <<c << endl;





	return 0;
}