/*
    @Author: Shahzaib Fareed
    @Course: CSCI-135
    @Instructor: Zamansky
    @Asignment: Lab1C

    The user will input a year number.
    Then using the modulo operator we will determine if it is a common year or leap year.
    The result will be outputted.
*/
#include <iostream>

int main() {
    int year;
    bool isleap;
    std::cout << "Enter year: ";
    std::cin >> year;

    if (year % 4 != 0){
        std::cout << "Common year";
    } else if (year % 100 != 0){
        std::cout << "Leap year";
    } else if (year % 400 != 0){
        std::cout << "Common year";
    } else {
        std::cout << "Leap year";
    }
}