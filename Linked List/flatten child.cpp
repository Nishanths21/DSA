#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* child;
    Node(int data1,Node* next1,Node* child1){
        data=data1;
        next=next1;
        child=child1;
    }
};
class Solution{
public:
    Node* merge(Node* list1,Node* list2){
        Node* dummy=new Node(-1);
        Node* res=dummy;
        while(list1!=NULL && list2!=NULL){
            if(list1->data<list2->data){
                res->child=list1;
                res=list1;
                list1=list1->child;
            }
            else{
                res->child=list2;
                res=list2;
                list2=list2->child;
            }
        }
        if(list1){
            res->child=list1;
        }
        else{
            res->child=list2;
        }
        if(dummy->child){
            dummy->child->next=NULL;
        }
        return dummy->child;
    }
    Node* flattenlist(Node* head){
        if(!head || !head->next){
            return head;
        }
        Node* flatten=flattenlist(head->next);
        head=merge(head,flatten);
        return head;
    }
};