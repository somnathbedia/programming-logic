#include <iostream>
using namespace std;

class Bike
{
private:
    string model;
    int releaseYear;

public:
    Bike()
    {
        this->model = "ASPT13";
    }

    void bikeOwner(string owner)
    {
        cout << "Bike starts....." << owner << endl;
    }
};

class HeroHonda : public Bike
{
public:
    void start()
    {
        cout << "Hero honda starts....." << endl;
    }
};

int main()
{
    HeroHonda myBike;

    myBike.start();
    myBike.bikeOwner("somnath");

    return 0;
}
