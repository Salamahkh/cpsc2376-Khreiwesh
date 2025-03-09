# cpsc2376-Khreiwesh

Programming 2 Assignments!

Practice 2 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

// Function to read the balance from the file
double readBalanceFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    double balance = 100.00;  // Default balance if file does not exist

    if (inFile.is_open()) {
        inFile >> balance;
    } else {
        std::ofstream outFile(filename);  // Create file with default balance
        outFile << std::fixed << std::setprecision(2) << balance;
        outFile.close();
    }
    return balance;
}

// Function to write the balance to the file
void writeBalanceToFile(const std::string& filename, double balance) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << std::fixed << std::setprecision(2) << balance;
    } else {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
        exit(1);
    }
}

// Function to check the balance
void checkBalance(double balance) {
    std::cout << "Your current balance is: $" << std::fixed << std::setprecision(2) << balance << std::endl;
}

// Function to deposit money
void deposit(double& balance) {
    double depositAmount;
    std::cout << "Enter deposit amount: ";
    std::cin >> depositAmount;

    if (depositAmount > 0) {
        balance += depositAmount;
        std::cout << "Deposit successful. Your new balance is: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    } else {
        std
