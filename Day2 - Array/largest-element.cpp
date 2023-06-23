//Given an array A[] of size n. The task is to find the largest element in it.

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0];
        for(int i=0; i<n; i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        return max;
    }
};