// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: December 4, 2023
// This program simulates a calculator

#include <iostream>
#include <cmath>

float calculator(float num1, float num2, std::string sign) {
    // use an if else structure to show what operations need to be carried out
    if (sign == "+") {
        return num1+num2;
    } else if (sign == "-") {
        return num1-num2;
    } else if (sign == "*") {
        return num1*num2;
    } else if (sign == "/") {
        return num1/num2;
    } else if (sign == "%") {
        return fmod(num1, num2);
    }
}


int main() {
    // declare variables
    float number1Float, number2Float, solution;
    std::string signUser, number1Str, number2Str;

    // get num1, num2, and the sign
    std ::cout << "This program simulates a calculator." << std::endl;
    std::cout << "What is your first number?" << std::endl;;
    std::cin >> number1Str;
    std::cout << "What is your second number?" << std::endl;
    std::cin >> number2Str;
    std::cout << "Enter a sign (ex. +)?" << std::endl;
    std::cin >> signUser;
    try {
        // convert num1 to float
        number1Float = std::stof(number1Str);

        try {
             // convert num2 to float
             number2Float = std::stof(number2Str);

             // if the user enters a valid sign call the calculator function
             if (
                 signUser == "+" ||
                 signUser == "-" ||
                 signUser == "*" ||
                 signUser == "/" ||
                 signUser == "%") {
                 // call the calculator function
                 solution = calculator(number1Float, number2Float, signUser);

                 // display the solution
                 std ::cout << number1Float << " " << signUser << " "
                            << number2Float << " = " << solution << std::endl;

             } else {
                 // otherwise, tell the user  to enter a valid sign
                 std ::cout << "Please enter a valid sign." << std::endl;
             }
        } catch (std::invalid_argument) {
            // if num2 is not a number, then tell them to enter a number.
            std::cout << number2Str << " is not a valid number." << std::endl;
        }
    } catch (std::invalid_argument) {
        //  if num1 is not a number, then tell them to enter a number.
        std::cout << number2Str << " is not a valid number." << std::endl;
    }
}
