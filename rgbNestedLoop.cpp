// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/11/15
// Uses nested loops to display RBG values

#include <iostream>

int main() {
    // Variables
    int red = 0;
    int blue = 0;
    int green = 0;

    // Title
    std::cout << "RGB colour values\n";

    // WHile loop to calculate the red RGB values
    while (red <= 255) {
        // to calculate the green RGB values
        while (green < 255) {
        // to calculate the blue RGB values
        while (blue < 255) {
            blue = blue + 1;
            printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)"
            , red, green, blue, red, green, blue);
        }
        green = green + 1;
        printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)"
        , red, green, blue, red, green, blue);
        }
        red = red + 1;
        printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)"
        , red, green, blue, red, green, blue);
    }
}
