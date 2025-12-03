#include<bits/stdc++.h>
using namespace std;
struct Node{
public:
    int data;
    Node* next;
    Node* random;
    Node(int data1,Node* next1,Node* random1){
        data=data1;
        next=next1;
        random=random1;
    }
};
class Solution{
public:
    unordered_map<Node*,Node*>map;
    Node* randomll(Node* head){
        if(head==NULL) return NULL;
        if(map.count(head)) return map[head];
        Node* copy=new Node(head->data);
        map[head]=copy;
        copy->next=randomll(head->next);
        copy->random=map[head->random];
        return copy;
    }
};