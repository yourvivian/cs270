#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;
    // Prompt the user for input
    cout << "Enter the fahrenheit temp: ";
    cin >> fahrenheit;
    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5/9;
    // Display the result
    cout << "celsius temp: " << celsius << endl;
    return 0;
}
