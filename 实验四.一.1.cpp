#include<iostream>
using namespace std;
int main()
{
	int nums[10], distinct[10];
	int count = 0;
	cout << "输入十个数字：";
	for (int i = 0; i < 10; i++) {
		cin >> nums[i];
		bool isRepeat = false;
		for (int j = 0; j < count; j++) {
			if (nums[i] == distinct[j]) {
				isRepeat = true;
				break;
			}
		}
		if (!isRepeat) {
			distinct[count++] = nums[i];

		}
	}
	cout << "不重复数组为：";
	for (int i = 0; i < count; i++) {
		cout << distinct[i] << " ";
	}
	return 0;
}