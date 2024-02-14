#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
    private:
    int data;
    Node *next;
    
    public:
    void insert(Node **head, int data){
        Node *newNode = new Node;
        
        newNode->data = data;
        newNode->next = NULL;
        
        if (*head == NULL){
            *head = newNode;
            return;
        }
        
        Node* last = *head;
        
        while(last->next != NULL){
            last = last->next;
        }
        
        last->next = newNode;
        return;
    }
    
    void printList(Node *head){
        while(head != NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<endl;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int N;
    cin>>N;
    
    Node newNode;
    Node *head = NULL;
    int val;
    
    for (int i=0; i<N; ++i){
        cin>>val;
        newNode.insert(&head, val);
    }
    
    newNode.printList(head);
    return 0;
}
