#include <iostream>

void calculer(double a, char op, double b, double &r);

void calculer(double a, char op, double b, double &r) {
    std::cout << a + b << std::endl;
    op = a + b;
}