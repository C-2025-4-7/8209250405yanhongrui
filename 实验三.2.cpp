#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num < 2) return false;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0)return false;
	}
	return true;
}
int main() {
	int temp = 0, num = 2;
	while (temp < 200) {
		if (is_prime(num)) {
			cout << num << "\t";
			temp++;
			if (temp % 10 == 0)cout << endl;

		}
		num++;
	}
	return 0;
}