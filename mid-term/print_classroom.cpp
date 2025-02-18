// print_classroom
// Inputs: 
// students - an array of n student objects
// n - number of students in the array
// Output: 
// prints to standard output the name of each student in the array
// Example:
// Peter
// Jennifer
// Xiao
// Juan
// Xiu
// Selena
// ...

void print_classroom(Student students[], int n) {
    // Loop through each student in the array and print their name
    for (int i = 0; i < n; ++i) {
        std::cout << students[i].getName() << std::endl;
    }
}
