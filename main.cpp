#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> numbers;
    std::string input;

    while (true) {
        std::cout << "Enter a number or 'end' to stop: ";
        std::cin >> input;

        if (input == "end") {
            break;
        }

        try {
            int number = std::stoi(input);
            numbers.push_back(number);
        } catch (const std::invalid_argument& e) {
            std::cout << "Invalid input. Please try again." << std::endl;
        }
    }

    std::cout << "Current vector: [";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    
    system("pause>nul");
    return 0;
}
