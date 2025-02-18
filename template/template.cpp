#include <iostream>

template<typename TBD>
TBD sum(TBD a[], int length) {
    TBD result;
    for (int i = 0; i < length; i++) {
        result += a[i];
    }
    return result;
}

int main() {
    int intArary[] = {1, 2, 3};
    int numElements = sizeof(intArary) / sizeof(intArary[0]);
    std::cout << "Sum of int array: " << sum(intArary, numElements) << std::endl;

    double doubleArray[] = {1.5, 2.5, 3.0};
    int doubleElements = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Sum of double array: " << sum(doubleArray, doubleElements) << std::endl;

    char charArray[] = {"h", "e", "l", "l", "o"};
    std::cout << "Sum of char array: " << sum(charArray, 5) << std::endl;

    return 0;
}