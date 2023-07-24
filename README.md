# colors
(Unix - systems) C++ console colors header 

Powered by STL 

# How to install c++ compilier on termux , linux , unix terminals ?
# termux

$ apt update && apt upgrade -y
$ pkg install build-essential

for checking enter 
$ g++ --version 


# How to use header ?

Example :

#include "colors.hpp"

int main () {
  printf(RED "HELLO WORLD !!!" RESET);
}

Output of this programm is HELLO WORLD !!! in red color 🔴


# Background color in header

std::cout << B_RED << WHITE << "Example" << RESET << std::endl;


# All colors :

RESET - COLOR NULL
DEFAULT - STANDART SYSTEM COLOR 

text colors :

RED 
GREEN
YELLOW
ORANGE
BLUE
BLACK
WHITE
MAGENTA 
CYAN 
PURPLE
DARK_RED
DARK_GREEN
DARK_YELLOW

background colors :

B_BLACK
B_WHITE 
B_RED
B_GREEN 
B_YELLOW
B_BLUE
B_PURPLE 
B_BLUE_1 - darkblue 


# ANCII
ANCII CODES :

CLEAR_SCREEN - works as system("clear")

RESET - return standart console textcolor 


# CLASS CURSOR , object cursor 

1. set cursor position :

   cursor.setCursorPosition(10,20);
   std::cout << "Hello!" << std::endl;

2. to move cursor up ↑

   cursor.moveCursorUp ( 5 ); // int lines_up
   printf(B_WHITE , BLACK , "Text" );
   printf(RESET);

3. to move cursor down ↓

   cursor.moveCursorDown(5);


to set own ANCII CODE use 

cursor.setANCIIcode ( int code ) ; //for color change 




colors in header was defined as char * type ( " " )  , using ANCII codes  \033[(color code)m

