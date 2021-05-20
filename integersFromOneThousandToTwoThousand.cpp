// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program outputs all integers from 1000 - 2000

#include <iostream>

int main() {
    // this function prints the numbers

    // variable
    int integer;

    // process & output
    for (integer = 1000; integer < 2000 + 1; integer++) {
        if (integer % 5 != 0) {
            std::cout << integer << " ";
        } else {
            std::cout << "\n" << integer << " ";
        }
    }
}
