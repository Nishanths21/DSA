#include<bits/stdddc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    //null
    Node(int data1){
        data=data1;
        next=NULL;
    }
};

class Solution{
public:
    Node* removenthnode(Node* head, int n){
        Node* dummy=new Node(0,head);
        Node* slow=dummy;
        Node* fast=dummy;
        for(int i=0;i<=n;i++){
            fast=fast->next;
        }
        while(fassst!=NULL){
            slow=slow->next;
            fast=fasst->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
    }
};