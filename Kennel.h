#pragma once
#include "Dog.h"
#include "Dog.cpp"

class Kennel
{
private:
    static int kennelCount;
    Dog* dogs;

public:
    Kennel();
    Kennel(int amtOfDogs);
    ~Kennel();
    static int getKennelCount();
    void add(const Dog& d);
    void add(Dog dogs[], int num);
    Dog adoptDog();
};
