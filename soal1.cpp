#include <iostream>

int main() {
    int inputdetik;
    std::cout << "Masukkan waktu dalam detik: ";
    std::cin >> inputdetik;

    if (inputdetik < 0) {
        std::cout << "Input tidak valid. Waktu tidak bisa negatif." << std::endl;
        return 1;
    }

    int jam = inputdetik / 3600;
    int menit = (inputdetik % 3600) / 60;
    int detik = inputdetik % 60;

    std::cout << "Output: ";
    if (jam < 10) std::cout << "0";
    std::cout << jam << ":";
    if (menit < 10) std::cout << "0";
    std::cout << menit << ":";
    if (detik < 10) std::cout << "0";
    std::cout << detik << std::endl;

    return 0;
}
