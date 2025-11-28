#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    ListNode* segregate(listNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* odd=head, *even=head->next, *evenhead=head->next;
        while(even!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return head;
    }
};