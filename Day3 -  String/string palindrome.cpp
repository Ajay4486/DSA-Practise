
class Solution{
public:			
int isPalindrome(string str)
{
    int s=0;
    int e=str.size()-1;
    while(s<=e)
    {
        if(str[s]!=str[e])
        {
            return 0;
            
        }
      s++;
      e--;
    }
    return 1;
}
	
};