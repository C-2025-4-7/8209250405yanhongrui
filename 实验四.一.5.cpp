#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int len1 = strlen(s1), len2 = strlen(s2);
	if (len1 > len2)return -1;
	for (int i = 0; i <= len2 - len1; i++)
	{
		bool match = true;
		for (int j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j]) {
				match = false;
				break;
			}
		}
		if (match)return i;
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "enter the first string:";
	cin >> s1;
	cout << "enter the second string:";
	cin.ignore();
	cin.getline(s2, 100);
	int idx = indexOf(s1, s2);
	cout << "indexOf(" << s1 << "," << s2 << "is" << idx << endl;
	return 0;
}