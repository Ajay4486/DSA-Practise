//check whether the array is sorted or not

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i=1; i<n; i++){
            if(arr[i]>=arr[i-1]){
                
            }
            else {
                return false;
            }
        }
        return true;
    }
};