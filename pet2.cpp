#include <iostream>
using namespace std;

    // Create a function that checks if your pet is friendly and playful 
    // by asking the user about that
        // Retrieve answers (yes or no) from the user to see if your pet is friendly and playful.
        // If is friendly and playful, print my pet is nice!
        // Retrieve the age of the pet. If the age is greater than seven
        // Count from 0 to the pet's age
        // Print the counter 
        
        // Otherwhise, print my pet is awesome too!
        // Retrieve the year your pet was born. If the year is lower than 2024
        // Count from 2024 to the year your pet was born 
        // Print the counter


// Test your function in the main
// int main () {
//     string isFriendly;
//     int age;
//     int yearBorn;
//     cout << "Is your pet friendly and playful?" << endl;
//     cin >> isFriendly;
//     if (isFriendly == "yes") {
//         cout << "My pet is nice!" << endl;
//         cout << "How old is your pet" << endl;
//         cin >> age;
//         if (age > 7) {
//             for (int count = 0; count <= age; count++)
//                 cout << count << endl;
//         }
            
//     } else {
//         cout << "My pet is awesome too!" << endl;
//         cout << "When is your pet born?" << endl;
//         cin >> yearBorn;
//         if (yearBorn < 2024) {
//             for (int count = 2024; count >= yearBorn; count--)
//                 cout << count << endl;
//         }
//     }
// }

void ageCounter(int age) {
    if (age > 7) {
        for (int counter = 0; counter <= age; counter++);
        cout << counter << endl;
    }
}

void checkPet (string friendly, string playful) {
    int age, yearl
    if ((friendly == "yes") && (playful) == "yes") {
        cout << "nice" << endl;
        cin >> age;
        ageCounter(age)
    } else {
        cout << "awesome" << endl;
    }
}

