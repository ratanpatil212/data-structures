#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *link;
};

Node *head = NULL;

void insertBeg(int d) {
    Node *ptr = new Node();
    ptr->data = d;
    ptr->link = head;
    head = ptr;
}

void insertEnd(int d) {
    Node *ptr = new Node();
    ptr->data =d;
    ptr->link = NULL;

    if(head == NULL) {
        head = ptr;
    }
    else {
        Node *temp = head;
        while(temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = ptr;
    }
}

int main() {

}