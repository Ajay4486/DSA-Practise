class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26] = {0};
        
        for(int i=0;i<str.length();i++){
            char ch = str[i];
            //lowercase 
            int num = 0;
            num = ch - 'a';
            arr[num]++;
        }
        
        
        //to find the maximum occuring character.
        int maxi = -1 , ans = 0;
        for(int i=0 ;i<26; i++)
        {
            if(maxi < arr[i])
            {
                ans = i;
                maxi = arr[i];
            }
        }
        return ans+'a';
    }

};