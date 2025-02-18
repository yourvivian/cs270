#include <string>
#include <iostream>

class Student {
public:
    // A blank constructor
    Student() {}

    // PART 1: Initializing constructor
    // Input: aname - a reference to a std::string indicating
    // the student's first name.
    // Write a constructor that initializes the object
    // according to the given input.
    
    Student(std::strin aname) {
        studentName = aname;
    }


    // PART 3: Interface implementation
    // DO PART 2 FIRST
    // Complete the methods for accessing object's data fields
    // Each should take only a single line
    
    // PART 2: data fields
    // Declare data fields to store the necessary information
    // for a Student.

    // Method to get the student's name
    std::string getName() {
        // Return the student's name
        return studentName;
    }

    // Method to set the student's name
    void setName(const std::string& n) {
        // Set the student's name
        studentName = n;
    }

private:
    // Declare necessary data fields (e.g., name)
    std::string studentName;
};
