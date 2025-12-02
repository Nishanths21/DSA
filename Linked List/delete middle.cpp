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
    Node(int data){
        data=data1;
        next=NULL;
    }
};
class Solution{
public:
    Node* deletemiddle(Node* head){
        if(!head || !head->next){
            delete head;
            return NULL;
        }
        Node* slow=head;
        Node* fast=head->next->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* middle=slow->next;
        slow->next=slow->next->next;
        delete middle;
        return head;
    }
};