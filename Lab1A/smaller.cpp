/*
    @Author: Shahzaib Fareed
    @Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 1A

    The program below will ask the user to input two integers.
    It will then find the smaller of the two and output it.
*/

#include <iostream>

int main() {
    int num1;
    int num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (num1 < num2){
        std::cout << "\nThe smaller of the two is " << num1;
    } else {
        std::cout << "\nThe smaller of the two is " << num2;
    }
}