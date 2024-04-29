#include <iostream>
using namespace std;

int main() {
    int inputdetik;
    cout << "Masukkan waktu dalam detik: ";
    cin >> inputdetik;

    if (inputdetik < 0) {
        cout << "Input tidak valid. Waktu tidak bisa negatif." << endl;
        return 1;
    }

    int jam = inputdetik / 3600;
    int menit = (inputdetik % 3600) / 60;
    int detik = inputdetik % 60;

    cout << "Output: ";
    if (jam < 10) cout << "0";
    cout << jam << ":";
    if (menit < 10) cout << "0";
    cout << menit << ":";
    if (detik < 10) cout << "0";
    cout << detik << endl;

    return 0;
}
