//Problem: 135. Candy
//Difficulty: Hard
//Link : https://leetcode.com/problems/candy/description/
//Author: solomer


int candy(int* ratings, int ratingsSize) {
  int did = 1;
  int sum = 0;
  int candies[ratingsSize];
  for (int i = 0; i < ratingsSize; i++) {
      candies[i] = 1;
  }
  for (int i = ratingsSize - 1; i > 0; i--) {//from right to left
      if (ratings[i - 1] > ratings[i] && !(candies[i - 1] > candies[i])) {
          candies[i - 1] = candies[i] + 1;
      }
  }
  for (int i = 0; i < ratingsSize - 1; i++) {//from left to right
      if (ratings[i + 1] > ratings[i] && !(candies[i + 1] > candies[i])) {
          candies[i + 1] = candies[i] + 1;
      }
  }
  for (int i = 0; i < ratingsSize; i++) {
      sum += candies[i]; //summation
  }
  return sum;
}