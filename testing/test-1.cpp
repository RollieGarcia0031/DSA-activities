#include <iostream>
#include <string>
#include <sstream>

int main(){

    std::string word = "hello again";

    std::cout << "hello" << std::endl;
    std::cout << word << std::endl;

    std::string test = "a b c, d e";
    std::istringstream iss(test);

    std::string x;
    while (iss >> x) {
        std::cout << x << std::endl;
    }

    return 0;
}
