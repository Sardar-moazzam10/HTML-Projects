#include <iostream>
#include <cctype> // for isdigit and isalpha functions

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int letterCount = 0;
    int spaceCount = 0;
    int numberCount = 0;
    int otherCount = 0;
    int i = 0;

    while(inputString[i] != '/0') {
        if (std::isalpha(inputString[i])) {
            letterCount++;
        }
        else if (std::isspace(inputString[i])) {
            spaceCount++;
        }
        else if (std::isdigit(inputString[i])) {
            numberCount++;
        }
        else {
            otherCount++;
        }

        i++;
    }

    std::cout << "Letter count: " << letterCount << std::endl;
    std::cout << "Space count: " << spaceCount << std::endl;
    std::cout << "Number count: " << numberCount << std::endl;
    std::cout << "Other character count: " << otherCount << std::endl;

    return 0;
}

