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
int addhelper(Node* head){
    if(head==NULL) return 1;
    int carry=aaddhelper(head->next);
    head->next+=carry;
    if(head->data<10){
        return 0;
    }
    head->data=0;
    return 1;
}
class Solution{
public:
    Node* addup1(Node* head){
        int carry=addhelper(head);
        if(carry==1){
            Node* newhead=new Node(1);
            newhead->next=head;
            head=newhead;
        }
        return head;
    }
};