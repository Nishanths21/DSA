#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    NOde(data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=NULL;
    }
};
class Solution{
public:
    Node* reverseintervative(Node* head){
        Node* prev=NULL;
        Node* temp=head;
        while(temp!=NULL){
            NOde* front=temp->next;
            temp->neext=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
};