// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on June 2021
// This program finds the smallest number of 10 random numbers

#include <iostream>
#include <iomanip>
#include <random>
#include <array>


template<size_t N>
int minValue(std::array<int, N> randomList) {
    // This program finds the smallest number

    int minNum = randomList[0];

    // process
    for (int loop_counter : randomList) {
        if (minNum <= loop_counter) {
            continue;
        } else if (minNum > loop_counter) {
            minNum = loop_counter;
        }
    }

    return minNum;
}


int main() {
    // This program prints 10 random integers and output
    std::cout << "This program prints 10 random integers between 1 and 100"
              << " and finds the smallest among them."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::array<int, 10> randomList;
    int randomNumber;
    int smallestNum;

    std::cout << "Displayed below are 10 random integers"
              << " between 1 and 100:" << std::endl;

    // process
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        // random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);

        randomList[loop_counter] = randomNumber;

        std::cout << randomNumber << std::endl;
    }

    smallestNum = minValue(randomList);

    std::cout << "" << std::endl;
    std::cout << "The smallest integer among these is: " << smallestNum
              << std::endl;
}
