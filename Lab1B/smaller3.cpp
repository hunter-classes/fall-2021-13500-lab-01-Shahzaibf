/*
    @Author: Shahzaib Fareed
    @Course: CSCI-135
    @Instructor: Zamansky
    @Asignment: Lab1B

    The code below will ask the user to input 3 integers.
    It will then find the smallest between all of the three.
    The result will be outputted.
*/

#include <iostream>

int main(){
    int num1;
    int num2;
    int num3;
    int smallest;
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    if (num1 < num2){
        if (num1 < num3){
            smallest = num1;
        }else{
            smallest = num3;
        }
    } else {
        if (num2 < num3){
        smallest = num2;
        } else {
            smallest = num3;
        }
    }
    std::cout << "\nThe smaller of the three is " << smallest;
}