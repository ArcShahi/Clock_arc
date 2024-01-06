#ifndef WINDOWS_CONSOLE_COLORS_H
#define WINDOWS_CONSOLE_COLORS_H


#include <windows.h>

enum ConsoleColor : WORD
{
    // Text Colors
    BLACK = 0,
    DARKBLUE = FOREGROUND_BLUE,
    DARKGREEN = FOREGROUND_GREEN,
    DARKCYAN = FOREGROUND_GREEN | FOREGROUND_BLUE,
    DARKRED = FOREGROUND_RED,
    DARKMAGENTA = FOREGROUND_RED | FOREGROUND_BLUE,
    DARKYELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
    DARKGRAY = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
    GRAY = FOREGROUND_INTENSITY,
    BLUE = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
    GREEN = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
    CYAN = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
    RED = FOREGROUND_INTENSITY | FOREGROUND_RED,
    MAGENTA = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
    YELLOW = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
    WHITE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,

    // Background Colors
    BG_BLACK = 0,
    BG_DARKBLUE = BACKGROUND_BLUE,
    BG_DARKGREEN = BACKGROUND_GREEN,
    BG_DARKCYAN = BACKGROUND_GREEN | BACKGROUND_BLUE,
    BG_DARKRED = BACKGROUND_RED,
    BG_DARKMAGENTA = BACKGROUND_RED | BACKGROUND_BLUE,
    BG_DARKYELLOW = BACKGROUND_RED | BACKGROUND_GREEN,
    BG_DARKGRAY = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
    BG_GRAY = BACKGROUND_INTENSITY,
    BG_BLUE = BACKGROUND_INTENSITY | BACKGROUND_BLUE,
    BG_GREEN = BACKGROUND_INTENSITY | BACKGROUND_GREEN,
    BG_CYAN = BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE,
    BG_RED = BACKGROUND_INTENSITY | BACKGROUND_RED,
    BG_MAGENTA = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE,
    BG_YELLOW = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN,
    BG_WHITE = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
};

constexpr char NoClr[] = "\033[0m";

static void setConsoleColor(WORD color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}



#endif // WINDOWS_CONSOLE_COLORS_H
