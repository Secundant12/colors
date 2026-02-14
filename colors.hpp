/* 

			Colors header was created for simple usage of ANCII-keys to change colors and cursor's position in console app;
			Created for C++ 17 +    


																								by $ecund@nt 

*/

#ifndef COLORS_H
#define COLORS_H

#include <iostream>
#include <string>
#include <cstdio>
#include <unistd.h>

// ANSI color codes as constexpr string literals
constexpr char CLEAR_SCREEN[] = "\033[2J";
constexpr char DEFAULT[] = "\033[39m";
constexpr char RED[] = "\033[91m";
constexpr char GREEN[] = "\033[92m";
constexpr char ORANGE[] = "\033[93m";
constexpr char BLUE[] = "\033[94m";
constexpr char BLACK[] = "\033[30m";
constexpr char WHITE[] = "\033[97m";
constexpr char MAGENTA[] = "\033[95m";
constexpr char CYAN[] = "\033[96m";
constexpr char PURPLE[] = "\033[35m";
constexpr char YELLOW[] = "\033[33m";
constexpr char DARK_RED[] = "\033[31m";
constexpr char DARK_GREEN[] = "\033[32m";
constexpr char DARK_YELLOW[] = "\033[33m";

// Background colors
constexpr char B_BLACK[] = "\033[40m";
constexpr char B_WHITE[] = "\033[47m";
constexpr char B_RED[] = "\033[41m";
constexpr char B_GREEN[] = "\033[42m";
constexpr char B_YELLOW[] = "\033[43m";
constexpr char B_BLUE[] = "\033[44m";
constexpr char B_PURPLE[] = "\033[45m";
constexpr char B_BLUE_1[] = "\033[46m";

constexpr char RESET[] = "\033[0m";

class Cursor {
public:
    // Use const reference for better performance with strings
    void setANSICode(int code) const {
        std::cout << "\033[" << code << "m";
    }

    void setCursorPosition(int row, int col) const {
        std::cout << "\033[" << row << ";" << col << "H";
    }

    void setCursorDefault() const {
        std::cout << "\033[0;0H";
    }

    void moveCursorUp(int lines) const {
        std::cout << "\033[" << lines << "A";
    }

    void moveCursorDown(int lines) const {
        std::cout << "\033[" << lines << "B";
    }

    void moveCursorForward(int cols) const {
        std::cout << "\033[" << cols << "C";
    }

    void moveCursorBackward(int cols) const {
        std::cout << "\033[" << cols << "D";
    }

    void saveCursorPosition() const {
        std::cout << "\033[s";
    }

    void restoreCursorPosition() const {
        std::cout << "\033[u";
    }

    void newline() const {
        std::cout << '\n';
    }

    // Overloaded method for printing with color
    void print(const std::string& text, const char* color = RESET) const {
        std::cout << color << text << RESET;
    }

    void println(const std::string& text, const char* color = RESET) const {
        std::cout << color << text << RESET << '\n';
    }

    // Removed pancii() as it had syntax error and unclear purpose
    // If you need to print a single character code, use:
    void printChar(char code) const {
        std::cout << code;
    }
};

// Global cursor instance - consider if this should be extern instead
inline Cursor cursor;

#endif // COLORS_H
