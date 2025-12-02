#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
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
    Node* findmiddle(Node* head){
        if(!head || !head->next) return head;
        Node* slow=heaad;
        Node* fast=head;
        while(fast!=NULL && fast->nexr!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};