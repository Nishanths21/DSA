#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data=data1;
        next1=next;
    }
    Node(int data1){
        data=data1;
        next=NULL;
    }
};
Node* recursivereverse(Node* head){
    if(!head || !head->next) return head;
    Node* newhead=recursivereverse(head->next);
    Node* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;
};
class Solution{
public:
    bool checkPalindrome(Node* head){
        if(!head || !head->next) return head;
        Node* slow=head;
        Node* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow->next;
            fast=fast->next->next;
        }
        Node* newhead=recursivereverse(slow->next);
        Node* first=head;
        Node* second=newhead;
        while(second!=NULL){
            if(first->data!=second->data){
                recursivereverse(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        recursivereverse(newhead);
        return true;
    }
};