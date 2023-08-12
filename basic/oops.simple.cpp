#include <iostream>
using namespace std;

class employee
{
    string name;
    int age;
    float salary;

public:
    employee(string name, int age, float salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void print()
    {
        cout << "Salary of " << this->name << " is " << this->salary << endl;
    }
};

class Mathematics
{
public:
    int evenNum[4] = {};
    int lenght = 4;

public:
    Mathematics()
    {

        for (int i = 0; i < this->lenght; i++)
        {
            cout << "Enter " << i + 1 << " number: ";
            cin >> this->evenNum[i];
        }
    }

    void display()
    {
        for (int i = 0; i < this->lenght; i++)
        {
            cout << this->evenNum[i] << " ";
        }
        cout << endl;
    }

    void printEvenOnly()
    {
        for (int i = 0; i < this->lenght; i++)
        {
            if (this->evenNum[i] % 2 == 0)
            {
                cout << this->evenNum[i] << endl;
            }
        }
    }
};

int main()
{

    Mathematics obj;

    obj.printEvenOnly();

    return 0;
}