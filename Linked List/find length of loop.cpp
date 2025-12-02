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
        data=dat1;
        next=NULL;
    }
};
class Solution{
public:
    int countloop(Node* head){
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL &&  fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return countlenght(slow);
            }
        }
        return 0;
    }
    int countlenght(Node* meetpoint){
        Node* temp=meetpoint;
        int length=1;
        while(temp->next!=meetpoint){
            temp=temp->next;
            length++;
        }
        return length;
    }
};