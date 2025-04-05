#include <iostream>
using namespace std;

int main() {
   int numMinutes;
   double* bodyTemperatures;
   int i;
   
   cin >> numMinutes;
   
   bodyTemperatures = new double[numMinutes + 1];
   
   for (i = 0; i <= numMinutes; ++i) {
      cin >> bodyTemperatures[i];
   }
   
   cout << "Initial body temperature: " << bodyTemperatures[0] << "F" << endl;
   
   for (i = 1; i <= numMinutes; ++i) {
      cout << "Body temperature after " << i << " minute(s) of exercise: " << bodyTemperatures[i] << "F ";
      cout << "Change: " << bodyTemperatures[i] - bodyTemperatures[i - 1] << "F" << endl;
   }
   
   delete[] bodyTemperatures;

   return 0;
}