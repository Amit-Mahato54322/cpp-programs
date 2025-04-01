// #ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;
class Product{
    public:
        void SetPriceAndName(int productPrice, string productName);
        int GetPrice() const;
        string GetName()const;

    private:
        int price;
        string name;
};
