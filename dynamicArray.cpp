// let's make a dynamic array whose size is determined at a run time;

//Dynamic Array Example
#include<iostream>
#include <string>
using namespace std;

class Restaurant
{
    private:
        string szNameOfRestaurant;
        string szTypeOfCuisine;
        double dAverageRating;
    public:
    // default constructor
        Restaurant()
        {
            szNameOfRestaurant = "Unknown";
            szTypeOfCuisine = "Unknown";
            dAverageRating = 0;

        }
    // parameterized constructor
        Restaurant(string szNameOfRestaurant, string szTypeOfCuisine, double dAverageRating)
        {
            this->szNameOfRestaurant = szNameOfRestaurant;
            this->szTypeOfCuisine = szTypeOfCuisine;
            this->dAverageRating = dAverageRating;
        }
    // member function to get the informations
    string getInfo()
    {
        string szInformation;
        szInformation = "Restaurant's Name: "+szNameOfRestaurant +"\n Cuisine Type: "+ szTypeOfCuisine + "\n Average rating: " + to_string(dAverageRating);
        return szInformation;
    }

};

int main()
{   
    Restaurant nepaliFood("Himalayan", "Thakali", 5);
    



    return 0;
}