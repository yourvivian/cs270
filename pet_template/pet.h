#ifndef PET_H
#define PET_H

namespace pet_namespace{
template <typename ThingHeight>
class Pet {
public:
    // Constructor
    Pet(ThingHeight petHeight);

    // Method to display pet details
    void displayInfo();

private:
    ThingHeight height;  // Templated type for height
};
}
#include "pet.template"  // Include the template implementation

#endif  // PET_H