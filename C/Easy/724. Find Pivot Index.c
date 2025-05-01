//Problem: 724. Find Pivot Index
//Difficulty: Easy
//Link : https://leetcode.com/problems/find-pivot-index///Author: solomer
//Author: solomer


int pivotIndex(int* nums, int numsSize) {
  int index=-1;
  int sum=0;
  for(int i=0;i<numsSize;i++){
      sum+=nums[i];
  }

  int sumnow=0;
  for(int i=0;i<numsSize;i++){

      if(i!=0) sumnow+=nums[i-1];

      if(sumnow==(sum-sumnow-nums[i])){
          index=i;
          break;
      }
  }
  return index;
}