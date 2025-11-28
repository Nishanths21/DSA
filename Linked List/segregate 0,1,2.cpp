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