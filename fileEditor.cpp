#include <iostream>
#include <fstream>
#include <string>

void editFile(const std::string& fileName) {
    std::fstream file(fileName, std::ios::in | std::ios::out);

    if (!file) {
        std::cerr << "Failed to open the file: " << fileName << std::endl;
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    std::cout << "Editing a file. Enter lines and confirm with enter. Type 'q' to exit."<< std::endl;
    file.clear();
    file.seekp(0, std::ios::end);
    while (std::getline(std::cin, line)) {
        if (line == "q") {
            break;
        }
        file << line << std::endl;
    }
    file.close();
}