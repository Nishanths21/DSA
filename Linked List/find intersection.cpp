#include<bis/stdc++.h>
using namespace std;
class Node{
public;
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
    Node* findintersection(Node* head1,Node* head2){
        Node* ptr1=head1;
        Node* ptr2=head2;
        while(ptr1!=ptr2){
            if(ptr1==NULL){
                ptr1=head2;
            }
            else ptr1=ptr1->next;
            if(ptr2==NULL){
                ptr2=head1;
            }
            else ptr2=ptr2->next;
        }
        return ptr1;
    }
};