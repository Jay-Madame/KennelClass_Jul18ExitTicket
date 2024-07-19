#pragma once
#include <iostream>
#include <string>

class Dog
{
private:
    std::string name, breed, gender;
    int age;

public:
    Dog();
    Dog(std::string Name, std::string Breed, int Ag, std::string Gender);
    std::string getGender();
    int dogAgeToHumanYears();
    void dogDesc(std::string Gender);
    std::string playDead();
    std::string sit();
    std::string bark();
};