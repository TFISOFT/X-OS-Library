#include <filesystem> //files
#include <stdlib.h> //console 

#include <iostream>
#include <string> 
#include <vector>

class xos {
public:
    void clear();
    void sys(std::string command);
    void color_print(std::string color, std::string message);
};