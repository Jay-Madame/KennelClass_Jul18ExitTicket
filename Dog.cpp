#include "Dog.h"

Dog::Dog()
{
    name = "Jack";
    breed = "Pitbull-Boxer mix";
    age = 2;
    gender = "boy";
}
Dog::Dog(std::string Name, std::string Breed, int Ag, std::string Gender) : name(Name), breed(Breed), age(Ag), gender(Gender)
{
}

std::string Dog::getGender()
{
    return gender;
}
int Dog::dogAgeToHumanYears()
{
    return (age * 7);
}
void Dog::dogDesc(std::string Gender)
{
    std::cout << " You wave hi to " << name << ", who is a "
              << breed << "." << std::endl;
    if (gender == "girl")
    {
        std::cout << " She barks happily at you. Who's a good girl? "
                  << name << " is!" << std::endl;
    }
    else if (gender == "boy")
    {
        std::cout << " He barks happily at you. Who's a good boy? "
                  << name << " is!" << std::endl;
    }
    std::cout << name << " is roughly " << std::to_string(dogAgeToHumanYears())
    << " years old in human years!";
}
std::string Dog::playDead()
{
    std::string mssg = name;
    mssg += " rolls onto its back with its paw in the air";
}
std::string Dog::sit()
{
    std::string mssg = name;
    mssg += " sits down and stares at you, eagerly awaiting a treat!";
}
std::string Dog::bark()
{
    std::string mssg = name;
    mssg += " gives out a playful bark. \"Bork!\"";
}