//
// Created by youssoupha faye on 02/12/2025.
//


#include <iostream>

int main() {
    int pile = 98;
    int t[3] = {1, 2, 3};
    int *fin = t + 3; // one-past-end
    for (int *p = t; p != fin; ++p) {
        std::cout << *p;
    }
}
