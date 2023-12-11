/*Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
      int cnt = 0;
      int k;

      for(int i = 0;i<n;i++){
          if(cnt==0){
              cnt = 1;
              k = nums[i];
          }
          else if(nums[i] == k){
              cnt++;
          }
          else{
              cnt--;
          }
      }

//checking if the stored element is the majority element:
      int cnt1=0;
      for(int i = 0 ; i<n;i++){
          if(nums[i] == k) cnt1++;
      }
      if(cnt1 > n/2) {
          return k;
      }
      return -1;
    }
};