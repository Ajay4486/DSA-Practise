/* Approach
1.Store the integer in a variable X and initialize a counter variable to count the number of digits.
2.We know that in programming languages when we divide X by Y it will result in an integer (given both the variables are integers). For example, 133/10 will result in 13 similarly 1/10 will result in 0.
3.Using a for loop and above observation keep on dividing X by 10 and increment the count in every iteration when X equals 0 terminate the loop and the count will have the number of digits in N.*/

class Solution{
    public:
    int evenlyDivides(int N){
        //code here
        
        int x;
        int count=0;
        int y=N;
      
       while(N!=0){
           x=N%10;
           if(x!=0 && y%x==0){
               count++;
           }
           
           N=N/10;
       }
       
       return count;
    }
};
