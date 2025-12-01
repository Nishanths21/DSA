#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    ListNode* segregate012(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dummyzero=new ListNode(-1);
        ListNode* dummyone=new ListNode(-1);
        ListNode* dummytwo=new ListNode(-1);
        ListNode* zero=dummyzero;
        ListNode* one=dummyone;
        ListNode* two=dummytwo;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                zero->next=temp;
                zer=temp;
            }
            else if(temp->data==1){
                one->next=te,p;
                one=temp;
            }
            else{
                two->next=temp;
                two=temp;
            }
            temp=temp->next;
        }
        //merge three lists
        if(dummyone->next!=NULL){
            zero->next=dummyone->next;
        }
        else{
            zero-next=dummytwo->next;
        }
        one->next=dummytwo->next;
        two->next=NULL;
        ListNode* newhead=dummyzer->next;
        delete dummyzero;
        delete dummyone;
        delete dummytwo;
        return newhead;
    }
}

//one more way of solving this problem is counting 0s,1s and 2s and then updating the original list accordingly.
class Solution{
public:
    Node* sortnode(Node* head){
        if(!head   || !head->next) return head;
        int count0=0;
        int coun1=0;
        int count2=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                count0++;
            }
            else if(temp->data==1){
                count1++;
            }
            else{
                count2++;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(count0>0){
                temp->data=0;
                count0--;
            }
            else if(count1>0){
                temp->data=1;
                count1--;
            }
            else{
                temp->data=2;
                count2--;
            }
            temp=temp->next;
        }
        return head;
    }
};
void printlist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
};

