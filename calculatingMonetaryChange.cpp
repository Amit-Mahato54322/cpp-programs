// Author: Amit Mahato
// Date: Feb 26, 2025 ( wednesday)
#include <iostream>
using namespace std;

/**
 * @brief Computes the minimum number of quarters, dimes, nickels, and pennies 
 *        needed to make up the total amount of cents provided.
 * 
 * @param totCents The total amount of cents to be converted into coins.
 * @param numQuarters Reference variable to store the number of quarters (25¢).
 * @param numDimes Reference variable to store the number of dimes (10¢).
 * @param numNickles Reference variable to store the number of nickels (5¢).
 * @param numPennies Reference variable to store the number of pennies (1¢).
 * 
 * @details 
 * The function calculates the number of each coin type by:
 * 1. Calculating how many quarters fit into the total cents.
 * 2. Using the remainder to calculate the number of dimes.
 * 3. Using the updated remainder to calculate the number of nickels.
 * 4. Using the final remainder to determine the number of pennies.
 */
void ComputeChange(int totCents, int& numQuarters, int &numDimes, int& numNickles, int& numPennies) {
   // Calculate the number of quarters
   numQuarters = totCents / 25;
   int dRemainderCents = totCents % 25; // Remainder after quarters

   // Calculate the number of dimes if remainder is greater than zero
   if (dRemainderCents > 0) {
      numDimes = dRemainderCents / 10;
      dRemainderCents %= 10; // Update remainder after dimes
   }

   // Calculate the number of nickels if remainder is greater than zero
   if (dRemainderCents > 0) {
      numNickles = dRemainderCents / 5;
      dRemainderCents %= 5; // Update remainder after nickels
   }

   // Calculate the number of pennies if remainder is greater than zero
   if (dRemainderCents > 0) {
      numPennies = dRemainderCents;
   }
}

int main() {
   int userCents = 0;      // User input: total cents
   int numQuarters = 0;    // Number of quarters to be calculated
   int numDimes = 0;       // Number of dimes to be calculated
   int numNickles = 0;     // Number of nickels to be calculated
   int numPennies = 0;     // Number of pennies to be calculated

   cout << "Enter total cents: " << endl;
   cin >> userCents; // Get total cents from the user

   // Call ComputeChange to calculate coin distribution
   ComputeChange(userCents, numQuarters, numDimes, numNickles, numPennies);

   // Display the number of each coin needed
   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << numDimes << endl;
   cout << "Nickles: " << numNickles << endl;
   cout << "Pennies: " << numPennies << endl;

   return 0; // End of program
}
