#include <iostream>

std::string ToLower(std::string &str) {
    for (char &ch : str) {
        ch = std::tolower(ch, std::locale());
    }
    return str;
}

int main() {
    std::cout << "-- Welcome to everything I know in C++! --" << "\n";

    std::string input;

    std::cout << "Are you ready to start the adventure?" << "\n";

    return 0;
}
