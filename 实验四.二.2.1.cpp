#include<iostream>
#include<cstring>
using namespace std;


int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 == 0 || len1 > len2) return -1;

    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) return i; 
    }
    return -1; 
}

int main() {
    char s1[100], s2[100];
    cout << "请输入字符串s1（子串）：";
    cin >> s1;
    cout << "请输入字符串s2（主串）：";
    cin >> s2;

    int pos = indexof(s1, s2);
    if (pos == -1) {
        cout << s1 << "不是" << s2 << "的子串" << endl;
    }
    else {
        cout << s1 << "是" << s2 << "的子串，首次匹配下标为：" << pos << endl;
    }
    return 0;
}