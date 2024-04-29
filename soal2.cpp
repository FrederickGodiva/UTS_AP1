#include <iostream>

int main() {
    std::string kalimat;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    for (char &c : kalimat) {
        c = std::toupper(c);
    }

    std::cout << "Output: " << kalimat << std::endl;

    return 0;
}
