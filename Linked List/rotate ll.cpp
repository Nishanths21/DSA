#includeMbits/stdc++.h>
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
class Solution{
public:
     Node* rotation(Node* head,int k){
        if(!head || !head->next) return head;
        Node* temp=head;
        int length=1;
        while(temp->next){
            temp=temo->next;
            length++;
        }
        temp->next=head
        k=k%length;
        int nullpointer=length-k;
        Node* newtail=head;
        for(int i=1;i<nullpointer;i++){
            newtail=newtail->next;
        }
        Node* newhead=newtail->next;
        newtail->next=NULL;
        return newhead;
     }
}