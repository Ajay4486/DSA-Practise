
#include<iostream>
using namespace std;

int lengthstring(char name[]){
   int count = 0 ;
   for(int i = 0 ; name[i]!='\0';i++){
    count++;
   }
   return count;
}

void reverse(char name[], int n){
      int s = 0 ;
      int e = n-1;

      while(s<e){
        swap(name[s++], name[e--]);
      }
}

int main(){
  char name[20];
  cout<<"Enter the name ";
  cin>>name;

  cout<<"Your name is "<<name<<endl;
   int len = lengthstring(name);
  cout<<" Length "<<len<<endl;
  reverse(name,len);
  cout<<" Reverse String : "<<name;
return 0; 
}