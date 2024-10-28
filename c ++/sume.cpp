#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;  // Input two integers

    std::cout << "Addition: " << num1 + num2 << std::endl;
    std::cout << "Subtraction: " << num1 - num2 << std::endl;
    std::cout << "Multiplication: " << num1 * num2 << std::endl;
    std::cout << "Division: " << num1 / num2 << std::endl;
    return 0;
}

