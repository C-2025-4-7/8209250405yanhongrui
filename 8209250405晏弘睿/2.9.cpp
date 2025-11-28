#include<iostream>
using namespace std;
int main()
{
	float apple = 0.8;
	for (float day = 2, all = 0; ; day = 2 * day, all = day + all) {
		if (day > 100) {
			cout << "买苹果花的钱为：" << apple * (all-day) << endl;
			break;
		}
	}








	return 0;
}