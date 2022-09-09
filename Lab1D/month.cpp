/*
    @Author: Shahzaib Fareed
    @Course: CSCI-135
    @Instructor: Zamansky
    @Asignment: Lab1D

    The user will input the year and the month. 
    The amount of days will then be calculated and outputted.
    Using leap years^.
*/

#include <iostream>

int main () {
    int month;
    int year;

    std::cout << "Enter year: ";
    std::cin >> year;

    std::cout << "Enter month: ";
    std::cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        std::cout << "31 days.";
    } else if (month == 4 || month == 6 || month == 9 || month == 11){
        std::cout << "30 days";
    }
    else{
        if (year % 4 != 0){
        std::cout << "28 days";
        } else if (year % 100 != 0){
        std::cout << "29 days";
         } else if (year % 400 != 0){
        std::cout << "28 days";
        } else {
        std::cout << "29 days";
        }
    }
}