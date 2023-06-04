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
class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        d = d%n;
       
        int temp[d];
        for(int i=0;i<d;i++)
        {
            temp[i]=arr[i];
        }
        
        for(int i=d;i<n;i++)
        {
            arr[i-d]=arr[i];
        }
        
        for(int i = n - d ;i<n; i++)
        {
            arr[i]=temp[i-(n-d)];
        }
    }
};