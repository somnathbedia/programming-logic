#include <iostream>
using namespace std;

class Mathematics
{
private:
    int val;
    int secondVal;

public:
    Mathematics()
    {
        this->val = 0;
        this->secondVal = 0;
        cout << "Constructor has been called\n";
    }

    int sum(int num1, int num2)
    {
        this->val = num1;
        this->secondVal = num2;

        int result = this->val + this->val;

        return result;
    }

    int sum()
    {
        int result = this->val + this->secondVal;
        return result;
    }
};

class evaluation : public Mathematics
{
private:
    int values[5];

public:
    evaluation()
    {
        cout << "child class constructor is called\n";
        cout << "Enter 5 values\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> this->values[i];
        }
    }

    int search(int val)
    {
        if (values)
        {
            for (int i = 0; i < 5; i++)
            {
                if (this->values[i] == val)
                {
                    return i;
                }
            }
        }

        return -1;
    }

    void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;

        cout << "Value after swaping" << endl;
        cout << a << " " << b << endl;
    }
};

int main()
{
    evaluation obj;
    cout << obj.search(4) << endl;

    // cout << obj.sum(15, 89) << endl;
    // obj.swap(12, 9);

    return 0;
}
