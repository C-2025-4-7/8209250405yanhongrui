#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) {
            char c = tolower(s[i]); 
            counts[c - 'a']++;
        }
    }
}

int main() {
    char s[1000];
    cout << "Enter a string: ";
    cin.ignore();
    cin.getline(s, 1000);

    int counts[26] = { 0 };
    count(s, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << (char)('a' + i) << ": " << counts[i] << " times" << endl;
        }
    }
    return 0;
}