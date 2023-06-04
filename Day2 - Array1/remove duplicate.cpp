//Given a sorted array A[] of size N, delete all the duplicated elements from A[]. Modify the array such that if there are X distinct elements in it then the first X positions of the array should be filled with them in increasing order and return the number of distinct elements in the array.


class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i=0;
        
        for(int j=1;j<n;j++){
            if(a[j]!=a[i]){
                a[j] = a[i+1];
                i++;
            }
        }
        return (i+1);
    }
};









// Another Approach

class Solution{
public:
    int remove_duplicate(int arr[],int n){
        // code here
        int res=arr[0];
        int k=1;
        for(int i=1;i<n;i++){
            if(res!=arr[i]){
                arr[k]=arr[i];
                k++;
                res=arr[i];
            }
        }
        return k;
    }
};