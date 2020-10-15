#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

//creating stack
   struct stack{
       int data[SIZE];
       int top;
   }st;

//checking if the stack is full
   int isFull(){
       if(st.top == SIZE-1)
        return 1;
       else
        return 0;
   }
//checking if the stack is empty
   int isEmpty(){
       if(st.top == -1)
        return 1;
       else
        return 0;
   }

//adding element
   void push(int item){
       if(!isFull){
        st.top++;
        st.data[st.top] = item;
       }
   }

//removing element
   int pop(){
       if(!isEmpty()){
        int temp = st.data[st.top];
        st.top--;
        return temp;
       }
   }

//peek
   int peek(){
       if(!isEmpty())
        return st.data[st.top];
   }

//initializing
   void init(){
       st.top = -1;
   }

   int main(){

    return 0;
}
