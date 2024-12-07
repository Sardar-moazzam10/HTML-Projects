#include <iostream>

int main() {
    int boardSize = 8; // Adjust this value to change the size of the checkerboard

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if ((i + j) % 2 == 0) {
                std::cout << "black ";
            } else {
                std::cout << "white ";
            }
        }
        std::cout << "\n"; // Move to the next row
    }

    return 0;
}

