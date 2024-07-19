#include <iostream>n
#include "Kennel.h"
#include "Kennel.cpp"

int main()
{
    Kennel petCo(2);
    std::string ans;
    std::cout << "There are/is " << petCo.getKennelCount()
              << " dog(s) waiting to be adopted."
              << std::endl;
    std::cout << "Would you like to adopt a dog? (y/n) ";
    std::cin >> ans;
    if (ans == "y")
    {
        Dog yourDog = petCo.adoptDog();
        yourDog.dogDesc(yourDog.getGender());
        std::cout << (yourDog.bark())
                  << std::endl;
    }
    std::cout << "There are " << petCo.getKennelCount()
              << " dogs remaining.";
    return 0;
}