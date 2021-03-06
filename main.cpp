#include <iostream>
#include <thread>
#include <Windows.h>

class ConsoleInstance {
public:
    ConsoleInstance Write(const std::string &str) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
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

    ConsoleInstance Clear() {
        ConsoleInstance it = *this;
        return it.ThenInsertNewLine(15);
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
        consoleInstance.Write("Let's begin... One of the first things I learned was how to create a function that turns a text into a lowercase")
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
            .Write("/* Multiline comment */")
            .ThenInsertNewLine(2)
            .ThenWaitFor(8000)
            .Clear();

        consoleInstance.Write("Every program starts with a 'Hello World'!")
            .ThenInsertNewLine(2)
            .ThenWaitFor(800)
            .Write("In C++, to output something to the console, we use 'std::cout << '(your text)', we use the insertion operator for this.")
            .ThenInsertNewLine(2)
            .ThenWaitFor(8000)
            .Clear();

        consoleInstance.Write("Let's have a look at the type system...")
            .ThenInsertNewLine(2)
            .ThenWaitFor(800)
            .Write("Some of C++ integral types include bool, char, wchar_t, char16_t, char32_t, short, int, and long.")
            .ThenInsertNewLine(1)
            .ThenWaitFor(800)
            .Write("Floating point types are represented through float and double.")
            .ThenWaitFor(800)
            .Write("'void' is a special type used with pointers and functions.")
            .ThenInsertNewLine(2)
            .ThenWaitFor(8000)
            .Clear();

        consoleInstance.Write("C++ also provides modifiers that help modify the meaning of the type, for example signed, unsigned, short, long.")
                .ThenInsertNewLine(1)
                .ThenWaitFor(800)
                .Write("Signed and unsigned can only be used on integrals, not on floating point types.")
                .ThenInsertNewLine(1)
                .ThenWaitFor(800)
                .Write("All types can be qualified with qualifiers, for example const, volatile, static.")
                .ThenInsertNewLine(1)
                .ThenWaitFor(800)
                .Write("All the types occupy memory and can hold a range of values. The memory requirement of the type depends on the requirement of the platform.")
                .ThenInsertNewLine(1)
                .ThenWaitFor(800)
                .Write("On a 16-bit platform, an integer may require 16 bits of memory, while on a 32 bit it will require 32 bits of memory.")
                .ThenInsertNewLine(2)
                .ThenWaitFor(8000)
                .Clear();

        consoleInstance.Write("Basic_ostream is responsible for output and basic_istream for input.")
                .ThenInsertNewLine(1)
                .ThenWaitFor(800)
                .Write( "C++ provides ostream and istream definitions for convenience.")
                .ThenInsertNewLine(1)
                .ThenWaitFor(800)
                .Write("Cout is an object of ostream class and cin is an object of istream class.")
                .ThenInsertNewLine(1)
                .ThenWaitFor(800)
                .Write( "Cout represents the console, and to write anything to the console we have to insert it into the cout object using the << operator.")
                .ThenInsertNewLine(1)
                .ThenWaitFor(800)
                .Write("To read from the keyboard we use the cin object, and we extract the characters from the cin object with the extraction the >> operator.")
                .ThenInsertNewLine(2)
                .Write("The objects and classes are declared in the iostream header.")
                .ThenInsertNewLine(2)
                .ThenWaitFor(8000)
                .Clear();
    } else {
        consoleInstance.Write("That's a shame...");
    }

    std::flush(std::cout);

    return 0;
}
