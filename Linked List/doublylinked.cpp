#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;
    
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

int main() {

}