#include <iostream>
using namespace std;

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (char &c : kalimat) {
        c = toupper(c);
    }

    cout << "Output: " << kalimat << endl;

    return 0;
}
