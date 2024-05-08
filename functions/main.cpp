//
// Created by houssem on 26/04/24.
//

#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "argc: " << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
    std::cout << "argc: " << argc << std::endl;
    return 0;
}