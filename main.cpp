#include <iostream>
#include <thread>
#include <Windows.h>
#include <stdlib.h>

class ConsoleInstance {
public:
    ConsoleInstance Write(const std::string &str) {
        std::cout << str;
        return *this;
    }

    ConsoleInstance ThenWaitFor(const int milliseconds) {
        Sleep(milliseconds);
        return *this;
    }

    ConsoleInstance ThenInsertNewLine(const int amount) {
        for (int i = 0; i < amount; i++) {
            std::cout << "\n";
        }
        return *this;
    }
};

std::string ToLower(std::string &str) {
    for (char &ch : str) {
        ch = std::tolower(ch, std::locale());
    }
    return str;
}

int main() {
    ConsoleInstance consoleInstance;

    consoleInstance.Write("-- Welcome to everything I know in C++! --")
        .ThenInsertNewLine(1)
        .ThenWaitFor(800);

    std::string input;

    consoleInstance.Write("Are you ready to start the adventure?").ThenInsertNewLine(1);
    std::cin >> input;
    if (ToLower(input) == "y" || ToLower(input) == "yy" || ToLower(input) == "yes") {
        consoleInstance.Write("Let's begin. Oh wait, we just did! One of the first things I learned was how to create a function that turns a text into a lowercase")
            .ThenInsertNewLine(1)
            .ThenWaitFor(800)
            .Write("Try and input something into the console and see how it magically turns into all lowercase:")
            .ThenInsertNewLine(1);

        std::string input_two;

        std::cin >> input;

        std::cout << ToLower(input) << "\n";
        consoleInstance.Write("First of all, in C++ you can specify comments in two ways:")
            .ThenInsertNewLine(2)
            .ThenWaitFor(800)
            .Write("First like this: ")
            .ThenInsertNewLine(1)
            .ThenWaitFor(800)
            .Write("// your comment")
            .ThenInsertNewLine(2)
            .ThenWaitFor(800)
            .Write("Or like this for multiline comments:")
            .ThenInsertNewLine(1)
            .ThenWaitFor(800)
            .Write("/* Multiline comment */");

        consoleInstance.Write("Every program starts with a 'Hello World'!")
            .ThenInsertNewLine(2)
            .ThenWaitFor(800)
            .Write("In C++, to output something to the console, we use 'std::cout << '(your text)', we use the insertion operator for this.");
    } else {
        consoleInstance.Write("That's a shame...");
    }

    std::flush(std::cout);

    return 0;
}
