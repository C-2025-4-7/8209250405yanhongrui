#include<iostream>
using namespace std;
int peach(int day) {
	if (day == 10)return 1;
	return 2 * (peach(day + 1) + 1);
}
int main() {
	cout << "第一天的桃子数：" << peach(1) << endl;
	return 0;
}