#include "pet.h"
using pet_namespace::Pet;
int main() {
    // Pet with float height
    Pet<float> myPet1(1.2f);
    myPet1.displayInfo();

    // Pet with int height
    Pet<int> myPet2(30);
    myPet2.displayInfo();

    return 0;
}