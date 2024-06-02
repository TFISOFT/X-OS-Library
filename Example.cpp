#include "xos.h"

xos x;

int main() {
    std::string username;
    std::string password;

    x.clear(); //clear example

    std::cout << "Hey! Enter your username: ";
    std::cin >> username;

    std::cout << "Enter your password: ";
    std::cin >> password;

    x.color_print("green", "Done!"); //color print example

    std::string Data = "Username: " + username + "\nPassword: " + password;
    
    x.color_print("green", Data);

    x.sys("mkdir " + username); //sys example

    x.color_print("Red","[!Warning] Created folder!");
} 