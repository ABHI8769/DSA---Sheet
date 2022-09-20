#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node (int data){
            this->data = data;
            next = NULL;
        }
};

Node *accept(){
    int x;
    cin>>x;
    Node *head = NULL , *tail = NULL;
    while (x != -1){
        Node *obj = new Node(x);
        if(head == NULL){
            head = obj;
            tail = obj;
        }
        else{
            tail->next = obj;
            tail = obj;
        }
        cin>>x;
    }
    return head;
}

void display(Node *head){
    while(head !=NULL){
        cout<<head->data<<"->";
        head = head ->next;
    }
    cout<<"NULL";
}

int main (){
    int t;
    cin>>t;
    while(t!=0){
        Node *head = accept();
        display(head);
        t--;
    }
}