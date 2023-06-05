//Rotate array by one place

class Solution{
	public:
	void leftRotate(int arr[],int n) 
	{ 
	   // Your code goes here
	    int temp = arr[0];
	   for(int i=1;i<n;i++)
	   {
	       arr[i-1]=arr[i];
	   }
	   arr[n-1] = temp;	 
	} 
};




//Rotate Array by D places.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // Rotate the entire array
        rotateArray(nums, 0, n - 1);

        // Rotate the first k elements
        rotateArray(nums, 0, k - 1);

        // Rotate the remaining elements
        rotateArray(nums, k, n - 1);
    }

private:
    void rotateArray(vector<int>& nums, int left, int right) {
        while (left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
};