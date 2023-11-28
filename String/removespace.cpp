//Replace Spaces with the given character using temp

#include<stdio.h>
#include<string.h>
string replaceSpaces(string &str){
    string temp = "";

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==" ")
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}



//Replace Spaces with the given character using temp
void replaceSpaces(string input){

       string rep = "@40";
       for(int i=0;i<str.length();i++)
    {
        if(input[i]==" ")
        {
            input.replace(i,1,rep);
        }       
    }
    cout<<input;
}
