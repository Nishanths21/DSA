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
    Node* reverserecursice(Node* head){
        if(!head || !head->next) return head;
        Node* newNode= reverserecursice(head->next);
        Node* front=head->next;
        front->next=head;
        head->next=NULL;
        return newNode;
    }
};