// Copyright (c) 2021 Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: June 11, 2021
// This program generates 10 random numbers into an array/list between 0 and 100
// and displays the number with the highest value

#include <time.h>
#include <iostream>
#include <random>
#include <array>

// declare constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_VALUE = 0;
const int MAX_VALUE = 100;


int findMinValue(std::array<int, MAX_ARRAY_SIZE> array) {
    // checks for the lowest value/number in a array
    int min = MAX_VALUE + 1;

    for (int number : array) {
        if (number < min) {
            min = number;
        }
    }
    return min;
}


int main() {
    // declare local variables
    int randomNumber, minValue;

    // create array
    std::array<int, MAX_ARRAY_SIZE> numberArray;

    // reset random numbers every runtime
    srand(time(NULL));

    for (int counter = MIN_VALUE; counter < MAX_ARRAY_SIZE; counter++) {
        // generate random number from 0 to 100 and add it to the array
        randomNumber = (rand() % MAX_VALUE) + MIN_VALUE;

        numberArray[counter] = randomNumber;

        // display the random number added and at which position/index
        std::cout << randomNumber << " added to the list at position ";
        std::cout << counter << ".\n";
    }
    std::cout << "\n";

    // call function to check for the lowest value in the array
    minValue = findMinValue(numberArray);

    // display the lowest value in the array
    std::cout << "The minimum value is: " << minValue;
}
