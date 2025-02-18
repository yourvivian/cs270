#include <cmath>
#include "calculator.h"

// Implement the following functions:
// Addition between two integers
// Substraction between two integers
// Multiplication between two integers
// Division between two integers
// Square root between two integers
int addition(int a, int b) {
    return a + b;
}
int substraction(int a, int b) {
    return a - b;
}
int multiplication(int a, int b) {
    return a * b;
}
float division(int a, int b) {
    if (b == 0) {
        return -1;
    }
    return a * 1.0 / b;
}
float squareroot(int a) {
    if (a < 0) {
        return -1;
    }
    return sqrt(a);
}
