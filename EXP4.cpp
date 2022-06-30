// C++ program to implement stack using linked list
#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *top = NULL;

void push(int val) {
    struct node *newnode = new node;
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

void pop() {
    if(top == NULL)
        cout<<"Stack is empty"<<endl;
    else {
        struct node *temp = top;
        top = top->next;
        cout<<"The popped element is "<< temp->data <<endl;
        delete temp;
    }
}

void display() {
    if(top == NULL)
        cout<<"Stack is empty"<<endl;
    else {
        cout<<"Stack elements are:";
        struct node *temp = top;
        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main(){
    push(90);
    push(69);
    push(31);
    push(22);
    push(40);
    display();
    pop();
    display();
}