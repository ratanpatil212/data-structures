#include<iostream>

using namespace std;

struct Node {

    int data;

    Node *link;
};

Node *head = NULL;

void deleteBeg(){
    if(head == NULL) {
        cout<< "The List is Empty";
    }
    else {
        Node *ptr = head;
        head = head->link;
        free(ptr);
    }
}

void deleteEnd() {
    Node *ptr, *prev;
    
    if(head == NULL) 
    {
        cout<< "The List is Empty";
    }
    if(head->link == NULL) {
        ptr = head;
        head = NULL;
        free(ptr);
    }
    else{
        ptr = head;
        while(ptr->link != NULL) {
            prev = ptr;
            ptr = ptr->link;
        }
        prev->link = NULL;
        free(ptr);
    }
}