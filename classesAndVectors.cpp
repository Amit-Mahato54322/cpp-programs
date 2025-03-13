// Author: Amit Mahato
// date: March 12, 2025

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * @class Review
 * @brief Represents a review consisting of a rating and a comment.
 * 
 * The Review class stores a numerical rating and an associated comment.
 * It provides methods to set and retrieve these values.
 */
class Review {
   public:
      /**
       * @brief Sets the rating and comment for the review.
       * 
       * @param revRating The rating of the review (integer).
       * @param revComment The comment associated with the review.
       */
      void SetRatingAndComment(int revRating, string revComment) {
         rating = revRating;
         comment = revComment;
      }

      /**
       * @brief Gets the rating of the review.
       * @return The integer rating.
       */
      int GetRating() const { return rating; }

      /**
       * @brief Gets the comment associated with the review.
       * @return The comment as a string.
       */
      string GetComment() const { return comment; }

   private:
      int rating = -1;          ///< Stores the review rating (default is -1).
      string comment = "NoComment";  ///< Stores the review comment (default is "NoComment").
};

/**
 * @brief Main function that collects and retrieves user reviews.
 * 
 * This program allows users to enter a list of reviews (ratings and comments).
 * After entering reviews, users can query the reviews based on a specific rating.
 */
int main() {
   vector<Review> reviewList;  ///< Stores the list of user reviews.
   Review currReview;          ///< Temporary variable to store the current review.
   int currRating;             ///< Stores the user's input rating.
   string currComment;         ///< Stores the user's input comment.
   unsigned int i;             ///< Iterator for loops.

   // Prompt user to enter reviews
   cout << "Type rating + comments. To end: -1" << endl;
   cin >> currRating;

   /**
    * @brief Collects user reviews.
    * 
    * The user enters a rating followed by a comment. Input continues
    * until the user enters -1 as the rating, signaling the end of input.
    */
   while (currRating >= 0) {
      getline(cin, currComment); // Gets rest of the comment line after rating
      currReview.SetRatingAndComment(currRating, currComment); // Store rating & comment
      reviewList.push_back(currReview); // Add to vector
      cin >> currRating; // Get next rating
   }

   // Prompt user to enter a rating to search for comments
   cout << endl << "Type rating. To end: -1" << endl;
   cin >> currRating;

   /**
    * @brief Searches for and displays comments with the given rating.
    * 
    * The user inputs a rating, and the program outputs all comments
    * associated with that rating. The loop continues until the user
    * enters -1.
    */
   while (currRating != -1) {
      for (i = 0; i < reviewList.size(); ++i) {
         currReview = reviewList.at(i);
         if (currRating == currReview.GetRating()) {
            cout << currReview.GetComment() << endl; // Output matching comments
         }
      }
      cin >> currRating; // Get next rating to search
   }

   return 0; // End of program
}
