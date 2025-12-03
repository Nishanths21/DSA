#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data1,Node* prev1,Node* next){
        data=data1;
        prev=prev1;
        next=next1;
    }
};
class Solution{
public:
    Node* tailnode(Node* head){
        Node* tail=heaad;
        while(tail!=NULL){
            tail=tail->next;
        }
        return tail;
    }
    vector<vector<int>> pairaddup(Node* head,int key){
        vector<vector<int>> ans;
        if(!head || !head->next) return ans;
        Node* left=head;
        Node* right=tailnode(head);
        while(left->data<right->data){
            if(left->data+right->data==key){
                ans.push_back({left->data,right->data});
                left=left->next;
                right->prev;
            }
            else if(left->data+right->data<key){
                right=right->prev;
            }
            else{
                left=left->next;
            }
        }
        return ans;
    }
};