#include <iostream>
using namespace std;

bool Prima(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Masukkan angka: ";
    getline(cin, input);

    int sum = 0;
    for (char c : input) {
        if (isdigit(c)) {
            int digit = c - '0';
            if (Prima(digit)) {
                sum += digit;
            }
        }
    }

    cout << "Output: " << sum << endl;

    return 0;
}
