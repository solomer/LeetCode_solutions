//Problem: 2302. Count Subarrays With Score Less Than K
//Difficulty: Hard
//Link : https://leetcode.com/problems/count-subarrays-with-score-less-than-k/description/?envType=daily-question&envId=2025-04-28
//Author: solomer

// Note: int this problem, I had to learn how to do window sliding because my early brute force method didnt work.

long long countSubarrays(int* nums, int numsSize, long long k) {
  int right = 0,left=0;
  long long sum = 0;
  long counter = 0;
  while(right < numsSize){
      sum += nums[right];
      right++;
      if (sum * (right - left) < k)
          counter += right - left;
      else
          while (1) {
              sum -= nums[left];
              left++;
              if (sum * (right - left) < k) {
                  counter += right - left;
                  break;
              }
          }
  }
  return counter;
}