#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data1,Node* prev1,Node* next1){
        data=data1;
        prev=prev1;
        next=next1;
    }
};
class Solution{
public:
    Node* deleteNode(Node* head,int key){
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                if(temp==head){
                    head=head->next;
                }
                Node* nextnode=temp->next;
                Node* prevnode=head->prev;
                if(nextnode) nextnode->prev=prevnode;
                if(prevnode) prevnode->next=nextnode;
                temp=nextnode;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};