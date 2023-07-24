#ifndef COLORS_H
#define COLORS_H

#include <stdio.h>
#include <unistd.h>

#define CLEAR_SCREEN "\033[2J"

#define DEFAULT "\033[39m"

#define RED "\033[91m"
#define GREEN "\033[92m"
#define ORANGE "\033[93m"
#define BLUE "\033[94m"
#define BLACK "\033[30m"
#define WHITE "\033[97m"
#define MAGENTA "\033[95m"
#define CYAN "\033[96m"
#define PURPLE "\033[35m"
#define YELLOW "\033[33m"
#define DARK_RED "\033[31m"
#define DARK_GREEN "\033[32m"
#define DARK_YELLOW "\033[33m"

#define B_BLACK "\033[40m"
#define B_WHITE "\033[47m"
#define B_RED "\033[41m"
#define B_GREEN "\033[42m"
#define B_YELLOW "\033[43m"
#define B_BLUE "\033[44m"
#define B_PURPLE "\033[45m"
#define B_BLUE_1 "\033[46m"

#define RESET "\033[0m"


class CURSOR {
public:

	void setANCIIcode (int code) {
		printf("\033[%dm" , code);
	}
	
    void setCursorPosition(int row, int col) {
        printf("\033[%d;%dH", row, col);
    }

    void setCursorDefault() {
        printf("\033[0;0H");
    }

    void moveCursorUp(int lines) {
        printf("\033[%dA", lines);
    }

    void moveCursorDown(int lines) {
        printf("\033[%dB", lines);
    }

    void moveCursorForward(int cols) {
        printf("\033[%dC", cols);
    }

    void moveCursorBackward(int cols) {
        printf("\033[%dD", cols);
    }

    void saveCursorPosition() {
        printf("\033[s");
    }

    void restoreCursorPosition() {
        printf("\033[u");
    }
    
    void nline () {
    	printf("\n");
    }
    
    void pancii (char * code ) {
    	printf("\%d",code);
    }
};

CURSOR cursor;

#endif
