#include <iostream>
#include <thread>
#include <Windows.h>

class ConsoleInstance {
    ConsoleInstance* Write(std::string &str) {
        std::cout << str;
        return this;
    }

    ConsoleInstance* ThenWaitFor(int milliseconds) {
        Sleep(milliseconds);
        return this;
    }
};

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

        std::string input_two;

        std::cin >> input;

        std::cout << ToLower(input) << "\n";

        std::cout << "First of all, in C++ you can specify comments in two ways:" << "\n";
        Sleep(800);
        std::cout << "\n" << "First like this: " << "\n";
        Sleep(800);
        std::cout << "// your comment" << "\n";
        Sleep(800);
        std::cout << "\n" << "Or like this for multiline comments:" << "\n";
        Sleep(800);
        std::cout << "/* Multiline comment */" << "\n";
    } else {
        std::cout << "That's a shame." << "\n";
    }

    std::flush(std::cout);

    return 0;
}
