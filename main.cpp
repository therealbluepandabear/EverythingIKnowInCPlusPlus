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

    std::cin >> input;

    if (ToLower(input) == "y" || ToLower(input) == "yy" || ToLower(input) == "yes") {
        std::cout << "Let's begin. Oh wait, we just did! One of the first things I learned was how to create a function that turns a text into a lowercase" << "\n";
        std::cout << "Try and input something into the console and see how it magically turns into all lowercase:" << "\n";
    }
    return 0;
}
