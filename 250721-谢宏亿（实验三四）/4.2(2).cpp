#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int decimal = 0;
    const char* p = hexString;
    while (*p != 0) {
        char c = *p;      
        int value = 0;
        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = 10 + (c - 'A');
        }
        else if (c >= 'a' && c <= 'f') {
            value = 10 + (c - 'a');
        }
        else {
            return 0;
        }
        decimal = decimal * 16 + value;
        *p++;
    }
    return decimal;
}
int main() {
    cout << parseHex("A5") << endl;
    return 0;
}