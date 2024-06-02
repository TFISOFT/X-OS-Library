#include "xos.h"

void xos::clear() {
    system("clear");
}

void xos::color_print(std::string color, std::string message) {
    //1.Green 2.Red 3.White
    std::string Color_Codes[] = {"\033[92m", "\033[31m", "\033[97m"};

    if (color == "Green" || color == "green") {
        color = Color_Codes[0];
    }
    else if (color == "Red" || color == "red") {
        color = Color_Codes[1];
    }
    else if (color == "White" || color == "white") {
        color = Color_Codes[2];
    }
    else {
        color = Color_Codes[2];
    }

    std::cout << color << message << "\033[97m" << std::endl;
}


void xos::sys(std::string command) {
    system(command.c_str());
}