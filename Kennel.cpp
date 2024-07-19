#include "Kennel.h"
#include "Dog.h"

int Kennel::kennelCount = 0;

Kennel::Kennel() : dogs(nullptr)
{

}
Kennel::Kennel(int amtOfDogs)
{
    dogs = new Dog[amtOfDogs];
    kennelCount += amtOfDogs;
}

Kennel::~Kennel()
{
    delete[] dogs;
}
int Kennel::getKennelCount()
{
    return kennelCount;
}
void Kennel::add(const Dog &d)
{
    dogs[kennelCount] = d;
    kennelCount++;
}
void Kennel::add(Dog dogs[], int num)
{
    for (int i = 0; i < num; i++)
    {
        dogs[kennelCount] = dogs[i];
        kennelCount++;
    }
}
Dog Kennel::adoptDog()
{
    Dog adoptedDog = dogs[kennelCount -1];
    kennelCount--;
    return adoptedDog;
}