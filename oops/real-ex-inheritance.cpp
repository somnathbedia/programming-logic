#include <iostream>
using namespace std;

class Offer
{
private:
    string user;
    int id = 0;
    bool isPremium = false;
    string premiumUserOffersList[5] = {"iphone", "macBook 14 pro max", "samsung galaxy s6", "ipad", "vivo book"};
    string offers[3] = {"adidas shoes", "Nike", "campus"};

public:
    Offer()
    {
        cout << "Enter your full name: ";
        cin >> this->user;
        cout << "Get premium: ";
        cin >> this->isPremium;
    }

    void showOffers()
    {
        if (this->isPremium)
        {
            cout << "Today's offers\n";
            for (int i = 0; i < 5; i++)
                cout << this->premiumUserOffersList[i] << endl;
        }
        if (!this->isPremium)
        {
            cout << "Your's offers\n";
            for (int i = 0; i < 3; i++)
                cout << this->offers[i] << endl;
        }
    }
};

class Flipkart : public Offer
{
private:
    int items[5] = {1, 2, 3, 4, 5};

public:
    void defaultProducts()
    {
        int itemSize = sizeof(items) / sizeof(items[0]);
        cout << "Default products...\n";
        for (int i = 0; i < itemSize; i++)
            cout << this->items[i] << endl;
    }

    bool searchProduct(int product)
    {
        for (int i = 0; i < 5; i++)
        {
            if (items[i] == product)
            {
                return 1;
            }
        }

        return 0;
    }
};

int main()
{
    Flipkart user1;
    // user1.showOffers();
    // user1.defaultProducts();

    cout << user1.searchProduct(3) << endl;

    return 0;
}