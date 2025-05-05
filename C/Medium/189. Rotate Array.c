//Problem: 189. Rotate Array
//Difficulty: Medium
//Link : https://leetcode.com/problems/rotate-array/description/
//Author: solomer

void rotate(int* nums, int numsSize, int k) {
    if (k < numsSize) {
        int temp[k ? k : 1];
        for (int i = 0; i < k; i++) {
            temp[i] = nums[numsSize - k + i];
        }
        for (int i = numsSize - 1; i > k - 1; i--) {
            nums[i] = nums[i - k];
        }
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    } else {
        k = k % numsSize;
        int l = 1;
        int temp[l];
        for (int j = 0; j < k; j++) {
            for (int i = 0; i < l; i++) {
                temp[i] = nums[numsSize - l + i];
            }
            for (int i = numsSize - 1; i > l - 1; i--) {
                nums[i] = nums[i - l];
            }
            for (int i = 0; i < l; i++) {
                nums[i] = temp[i];
            }
        }
    }
}