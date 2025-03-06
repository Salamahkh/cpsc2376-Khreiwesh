# cpsc2376-Khreiwesh

Programming 2 Assignments!

#include <iostream>
#include <vector>

void printVector(const std::vector<int>& vec) {
    std::cout << "Vector contents: ";
    for (const int& num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

void doubleVector(std::vector<int>& vec) {
    for (int& num : vec) {
        num *= 2;
    }
}

int findSum(const std::vector<int>& vec) {
    int sum = 0;
    for (const int& num : vec) {
        sum += num;
    }
    return sum;
}

void printMultiples(const std::vector<int>& vec, int value) {
    std::cout << "Multiples of " << value << ": ";
    for (const int& num : vec) {
        if (num % value == 0) {
            std::cout << num << " ";
        }
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> numbers;
    int choice;
    
    do {
        std::cout << "\nMenu:\n"
                  << "1. Add an item\n"
                  << "2. Print vector\n"
                  << "3. Double the vector\n"
                  << "4. Find sum\n"
                  << "5. Print multiples of a value\n"
                  << "6. Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                std::cout << "Enter a number: ";
                std::cin >> num;
                numbers.push_back(num);
                break;
            }
            case 2:
                printVector(numbers);
                break;
            case 3:
                doubleVector(numbers);
                std::cout << "Vector doubled.\n";
                break;
            case 4:
                std::cout << "Sum: " << findSum(numbers) << "\n";
                break;
            case 5: {
                int value;
                std::cout << "Enter a value: ";
                std::cin >> value;
                printMultiples(numbers, value);
                break;
            }
            case 6:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice, try again.\n";
        }
    } while (choice != 6);
    
    return 0;
}
