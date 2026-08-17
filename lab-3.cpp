//1.Implementing Stack using Linked List 

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* top = NULL;
// Push operation
void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed into stack\n";
}
// Pop operation
void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = top;
    cout << temp->data << " popped from stack\n";
    top = top->next;
    delete temp;
}
// Display stack
void display() {
    Node* temp = top;
    cout << "Stack: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}

//2.Implementing Queue using Linked List
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* front = NULL;
Node* rear = NULL;
// Enqueue = Add element
void enqueue(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;    }
    cout << value << " enqueued into queue" << endl;}
// Dequeue = Remove element
void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    Node* temp = front;
    cout << temp->data << " dequeued from queue" << endl;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    delete temp;
}
// Display queue
void display() {
    Node* temp = front;
    cout << "Queue: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}