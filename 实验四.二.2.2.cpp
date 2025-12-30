#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;


int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) {
        char c = toupper(hexString[i]); 
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            val = 10 + (c - 'A');
        }
        else {
            
            return 0;
        }
        result = result * 16 + val;
    }
    return result;
}

int main() {
    char hexStr[100];
    cout << "请输入16进制字符串：";
    cin >> hexStr;

    int decNum = parseHex(hexStr);
    cout << "转换后的10进制数为：" << decNum << endl;
    return 0;
}