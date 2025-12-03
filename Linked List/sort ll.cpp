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
        next=NNULL;
    }
};
class Solution{
public:
    Node* mergesort(Node* list1, Node* list2){
        Node* dummy= new Node(-1);
        Node* temp=dummy;
        while(list1!=NULL && list2!=NULL){
            if(list1->data<=list2->data){
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;
        }
        if(list1){
            temp->next=list1;
        }
        else{
            temp->next=list2;
        }
        return dummy->next;
    }
    Node* middle(Node* head){
        if(!head || !head->next) return head;
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node* sortll(Node* head){
        if(!head || !head->next) return head;
        Node* middlele=middle(head);
        Node* right=middle->next;
        middlele->next=NULL;
        Node* left=head;
        left=sortll(left);
        right=right(right);
        return mergesort(left,right);
    }
};