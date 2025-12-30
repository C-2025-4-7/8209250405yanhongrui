#include<iostream>
using namespace std;
void bubbleSort(double arr[], int n)
{
	bool changed;
	do { changed = false;
	for (int j = 0; j < n - 1; j++) {
		if (arr[j] > arr[j + 1]) {
			swap(arr[j], arr[j + 1]);
			changed = true;
		}
	}
	} while (changed);
}
int main()
{
	double arr[10];
	cout << "Enter 10 double numbers:";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	bubbleSort(arr, 10);
	cout << "Ã°ÅÝÊýÁÐ£º";
	for (double num : arr) {
		cout << num << " ";

	}
	return 0;
}