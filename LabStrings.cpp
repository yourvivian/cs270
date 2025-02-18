#include <iostream>
#include <string>

using namespace std;
// Create a function that returns a string reverse. 
// The reverse function has a string input.
// Example: reverse("Walla"). It returns allaW

string reverse(string message){
   string res = "";
   for (int i = message.length(); i--; i >= 0) {
        res += message[i];
   }
   return res;
}

// Create a function that returns the character 
// given an index. The index can be even be larger that the
// end of the string. Example access("Walla city", 11). 
// It returns a.
char access(string message, int index){
   int actual_index;
   actual_index = index % message.length();
   return message[actual_index];
}

// Create a main function and test your two functions.
// The user should type the string to be reversed and print the reverse string
// The user should type the string and index and print the char with that index

int main() {
    string message;
    string message2;
    int index;
    cout << "String to be reversed: " << endl;
    getline(cin, message);
    cout << reverse(message) << endl;
    cout << "String to be index: " << endl;
    getline(cin, message2);
    cout << "at index: " << endl;
    cin >> index;
    cout << access(message2, index);
}