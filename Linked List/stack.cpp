#include<iostream>
using namespace std;

#define n 100

class stack{
    int *arr;
    int top;

    public:
        stack(){
            arr = new int[n];
            top = -1;
        }
    
    void push(int x) {
        if(top == n-1) {
            cout<< "Overflow";
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop() {
        if(top == -1){
            cout<< "Underflow";
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1) {
            cout<< "Empty";
            return -1; 
        }
        arr[top];
    }
};