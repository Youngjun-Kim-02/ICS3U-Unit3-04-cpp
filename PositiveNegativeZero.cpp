// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program checks if integer is positive or negative or zero

#include <iostream>

int main() {
    // this function checks if integer is positive or negative or zero
    int integer;

    // input
	std::cout << "Enter an integer: ";
	std::cin >> integer;
	std::cout << "" << std::endl;

	// process
	if (integer > 0)
	        // output
	        std::cout << "Positive number.";
	// process
	else if (integer == 0)
	        // output
	        std::cout << "0 is just zero.";
	else
	    std::cout << "Negative number";
	std::cout << "" << std::endl;
	std::cout << "Done." << std::endl;
}
