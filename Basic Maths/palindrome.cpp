/*Given an integer x, return true if x is a palindrome, and false otherwise.*/

class Solution {
public:
bool isPalindrome(int x){
    if(x<0 || x!=0 && x%10 ==0 ) return false; //checking for negative number and if number is 0 or else integer is zero
    int check=0;
    while(x>check){
        check = check*10 + x%10;
        x/=10;
    }
    return (x==check || x==check/10);  //checking if number is equalto r.no and checking for even number
}
};