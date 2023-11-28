// Stack implementation using Array.

#include<iostream>
#include<stack>
using namespace std;


class Stack{
       
       int *arr;
       int top;
       int size;
  public:
  Stack(int size){                 //constructor
        this -> size = size;
        arr = new int[size];
        top = -1;
  }

  void push (int x) {
      if(size-top>1){
        top++;
        arr[top] = x;
      }
      else{
        cout<<"Stack is Overflow"<<endl;
      }
  }

  void pop(){
       if(top>=0){
          top-- ;
       }
       else{
        cout<<"Stack is underflow"<<endl;
       }
  }

  int peek(){
       if(top>0){
        return arr[top];
       }
       else{
        cout<<"Stack is empty";
        return -1;
       }
  }

  bool isEmpty(){
        if(top == -1){
            return true;
        }   
        else{
            return false;
        }
  }
        
};

int main() {


    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty " << endl;
    }

    return 0;
}







