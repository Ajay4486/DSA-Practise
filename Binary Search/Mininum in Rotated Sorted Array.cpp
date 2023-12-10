/*Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
Example 2:

Input: nums = [4,5,6,7,0,1,2]
Output: 0
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1;
        int ans = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            // ans = min(ans, nums[mid]);
            //break;                       // for element if present in mid

            //left sorted array
            if(nums[low] <= nums[mid])
            {
                ans = min(ans, nums[low]);
                low = mid+1;    //eliminate left sorted array
            }
            else{
              //eliminate right sorted array
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
       return ans; 
    }
};