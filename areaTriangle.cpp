// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: November 23, 2022
// This program asks the user for the base and the height
// of a triangle and then calculates and displays the area


#include <iostream>


/**
 * Calculates and displays the area of a triangle
 * 
 * @param height Container for the height measurement of the triangle
 * @param width Container for the base measurement of the triangle
 */
void Calc_Area(float height, float base) {
    // Declared Area variable
    float area;

    // Calculates the area
    area = (base * height) / 2;

    // Displays the area to the user
    std::cout << "The area of the triangle: " << area << "cm^2" << std::endl;
}

int main() {
    // Declared Variables
    std::string userHeightString, userBaseString;
    float userHeightFloat, userBaseFloat;

    // Asks user for the measurement of the height of the triangle
    std::cout << "Enter the measurement for height of the triangle (cm): ";
    std::cin >> userHeightString;

    // Asks user for the measurement of the base of the triangle
    std::cout << "Enter the measurement for base of the triangle (cm): ";
    std::cin >> userBaseString;

    // Checks for exceptions
    try {
        // Converts user's triangle height to float
        userHeightFloat = stof(userHeightString);

        // Converts user's base height to float
        userBaseFloat = stof(userBaseString);

        // If the user inputs a negative number for the height or base
        if (userBaseFloat < 0 || userHeightFloat < 0) {
            std::cout << "Your number(s) cannot be negative!" << std::endl;

        // Calls Calc_Area function to calculate and display the area
        } else {
            Calc_Area(userHeightFloat, userBaseFloat);
        }

    // In the event of an exception
    } catch (std::invalid_argument) {
        std::cout << "You must enter non-negative numbers!" << std::endl;
    }
}
