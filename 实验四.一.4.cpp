#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j]) {
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1)list3[k++] = list1[i++];
	while (j < size2)list3[k++] = list2[j++];
}
int main() {
	const int maxsize = 100;
	int size1, size2;
	cout << "输入数组一的个数：";
	cin >> size1;
	int list1[maxsize];
	cout << " 输入数组一：";
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "输入数组二的个数：";
	cin >> size2;
	int list2[maxsize];
	cout << " 输入数组二：";
	for (int i = 0; i < size1; i++) {
		cin >> list2[i];
	}
	int list3[maxsize*2];
	merge(list1, size1, list2, size2, list3);
	cout << "合并数列为：";
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";

	}
	return 0;
}